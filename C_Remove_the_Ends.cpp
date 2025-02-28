#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    vector<ll> s(n+1,0),p(n+1,0);

    for (int i = 0; i < n; i++) {
        if(a[i]<0){
            p[i+1] = p[i];
        }
        else{
            p[i+1] = p[i]+a[i];
        }
    }
    for (int i = n-1; i >= 0; i--) {
        if(a[i]>0){
            s[i] = s[i+1];
        }
        else{
            s[i] = s[i+1]-a[i];
        }
    }
    ll ans = 0;
    for (int i = 0; i <= n; i++) {
        ans = max(ans,p[i]+s[i]);
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