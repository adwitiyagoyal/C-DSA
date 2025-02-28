#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &interval){
    sort(interval.begin(),interval.end());
    vector<vector<int>> ans;
    for (int i = 0; i < interval.size(); i++) {
        if(ans.empty() || ans.back()[1]<interval[i][0]){
            ans.push_back(interval[i]);
        }
        else{
            ans.back()[1] = max(ans.back()[1],interval[i][1]);
        }
    }
    return ans;
}
vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
    vector<vector<int>> v;
    int i=0,j=0;
    while(i<A.size() && j<B.size()){
        int l=max(A[i][0], B[j][0]);
        int u=min(A[i][1], B[j][1]);
        if(l<=u) v.push_back({l,u});
        if(A[i][1] < B[j][1])   i++;
        else j++;
    }
    return v;
}
bool present(int y,vector<vector<int>> &intervals){
    int s = 0;
    int e = intervals.size()-1;
    while(s<=e){
        int i = s+(e-s)/2;
        int u = intervals[i][0];
        int v = intervals[i][1];
        if(y>=u && y<=v){
            return true;
        }
        else if(y<u){
            e = i-1;
        }
        else{
            s = i+1;
        }
    }
    return false;
}
int bs(vector<vector<vector<int>>> &intervals,int y){
    int s = 0;
    int e = intervals.size()-1;
    int ans = 0;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(present(y,intervals[mid])){
            ans = mid+1;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

void solve() {
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    vector<int> s(n);
    vector<int> prexor(n,0);
    int val = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        s[n-1-i] = a[i];
    }
    prexor[0] = s[0];
    for (int i = 1; i < n; i++) {
        prexor[i] = prexor[i-1]^s[i];
    }
    vector<vector<vector<int>>> intervals;
    intervals.push_back({{s[0],val}});
    
    for (int i = 0; i < n-1; i++) {
        int v = prexor[i];
        int t = s[i+1];
        vector<vector<int>> b;
        int his = 0;
        //30
        for (int j = 30; j >=0; j--) {
            if(v>>j == 0 && t>>j == 0){
                b.push_back({int(pow(double(2),double(j))),int(pow(double(2),double(j+1)))-1});
                continue;
            }
            int w = (t>>j)&1;
            int z = (v>>j)&1;
            if(w == 0){
                if(z == 1){
                    b.push_back({his,his+int(pow(double(2),double(j)))-1});
                    his += int(pow(double(2),double(j)));
                }
                else{
                    b.push_back({his+int(pow(double(2),double(j))),his+int(pow(double(2),double(j+1)))-1});
                }
            }
            else{
                if(z == 0){
                    his+=int(pow(double(2),double(j)));
                }
            }
        }
        b.push_back({his,his});
        vector<vector<int>> unio = merge(b);
        vector<vector<int>> fin = intervalIntersection(unio,intervals.back());
        intervals.push_back(fin);
        // cout<<intervals.back().size()<<endl;
        // for (int i = 0; i < unio.size(); i++) {
        //     cout<<unio[i][0]<<" "<<unio[i][1]<<endl;
        // }
    }

    for (int i = 0; i < q; i++) {
        int y;
        cin>>y;
        cout<<bs(intervals,y)<<" ";
    }

    cout<<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}