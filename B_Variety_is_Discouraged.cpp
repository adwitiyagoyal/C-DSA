#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    set<int> se;
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        m[a[i]]++;
        
    }
    for(auto x:m){
        if(x.second == 1){
            se.insert(x.first);
        }
    }
    int s = 0,e = 0;
    int ans = 0;
    int l=0,r=0;
    while(e<n){
        if(se.find(a[e]) == se.end()){
            s = e+1;
        }
        else{
            int z = e-s+1;
            if(ans<z){
                ans = z;
                l = s;
                r = e;
            }
        }
        e++;
    }
    if(ans == 0){
        cout<<0<<endl;
    }
    else{
        cout<<l+1<<" "<<r+1<<endl;
    }

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