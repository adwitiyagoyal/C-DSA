#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        
        cin>>a[i];

    }
    ll v = 2;
    while(1){
        set<ll> s;
        for (int i = 0; i < n; i++) {
            s.insert(a[i]%v);
        }
        if(s.size() == 2){
            cout<<v<<endl;
            return;
        }
        v = v*2;
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