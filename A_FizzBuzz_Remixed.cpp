//ADWITIYAGOYAL105___||!||___GOYAL //
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ul;
void solve() {
    ll n;
    cin>>n;

    ll x = n/15;
    ll y = n%15;

    ll ans = 3*x;
    if(y>=2){
        ans+=3;
    }
    else{
        ans += y+1;
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