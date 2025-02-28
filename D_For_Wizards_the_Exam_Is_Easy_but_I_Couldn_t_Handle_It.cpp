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
    ll maxi =0;
    ll l = 1;
    ll r = 1;
    for (int i = 0; i < n; i++) {
        ll g = 0;
        ll s = 0;
        for (int j = i+1; j < n; j++) {
            if(a[j]>a[i]){
                g++;
            }
            else if(a[i]>a[j]){
                s++;
            }
            if((g-s) < maxi){
                maxi = g-s;
                l = i+1;
                r = j+1;
            }
        }
    }
    cout<<l<<" "<<r<<"\n";
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