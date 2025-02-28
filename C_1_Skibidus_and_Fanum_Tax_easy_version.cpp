#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,y;
    cin>>n>>m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cin>>y;
    vector<int> x;
    x.push_back(min(a[0],y-a[0]));
    for (int i = 1; i < n; i++) {
        int v  = x.back();
        int g = y-a[i];
        if(max(g,a[i])<v){
            cout<<"NO\n";
            return;
        }
        if(min(g,a[i])>=v){
            x.push_back(min(g,a[i]));
        }
        else{
            x.push_back(max(g,a[i]));
        }
    }
    cout<<"YES\n";
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