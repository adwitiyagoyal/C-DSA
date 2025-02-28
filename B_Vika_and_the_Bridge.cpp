#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<vector<int>> b(k+1);
    for (int i = 1; i <= k; i++) {
        b[i].push_back(-1);
    }
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        b[a[i]].push_back(i);
    }
    for (int i = 1; i <= k; i++) {
        b[i].push_back(n);
    }
    int ans = INT_MAX;
    for (int i = 1; i <= k; i++) {
        int v = b[i][1]-b[i][0];
        int prev = b[i][1]-b[i][0];
        for (int j = 0; j < b[i].size()-1; j++) {
            v = min(b[i][j+1]-b[i][j],v);
        }   
        //cout<<v<<" ";
        prev = v;
        for (int j = 0; j < b[i].size()-1; j++) {
            if(v<=(b[i][j+1]-b[i][j])){
                prev = v;
                v = b[i][j+1]-b[i][j];
            }
            else if(prev<b[i][j+1]-b[i][j]){
                prev = b[i][j+1]-b[i][j];
            }
        }
        //cout<<max(prev,int(ceil(double(v)/2.0)))-1<<endl;
        ans = min(max(prev,int(ceil(double(v)/2.0)))-1,ans);
    }
    cout<<ans<<"\n";
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