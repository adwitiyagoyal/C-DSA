#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve() {
    ll n,k;
    cin>>n>>k;

    ll i=0;
    ll pre =0;
    for (i = 0; i < n-1; i++) {
        if((k|i) != k){
            break;
        }
        else{
            cout<<i<<" ";
            pre |= i;
        }
    }
    if(i == n-1 && (pre|(n-1)) == k){
        cout<<n-1<<"\n";
    }
    else{
        for (; i < n; i++) {
            cout<<k<<" ";
        }
        cout<<"\n";
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