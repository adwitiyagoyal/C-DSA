    //ADWITIYAGOYAL105___||!||___GOYAL //
    #include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
    typedef unsigned long long int ul;
    void solve() {
        ll n;
        cin >> n;
        ll mod = 998244353;
        vector<ll> h(n+2,0);
        ll maxi = 0;
        for (ll i = 2; i <=n; i++) {
            ll x;
            cin>>x;
            h[i] = h[x]+1;
            maxi = max(h[i],maxi);
        }
        vector<ll> m(maxi+3,0);
        for (int i = 2; i <= n; i++) {
            m[h[i]]++;
        }
        vector<ll> k(maxi+3,0);
        k[maxi] = m[maxi]%mod;
        for (ll i = maxi-1; i >=1; i--) {
            ll z = m[i]%mod;
            ll v = (m[i]-1)%mod;
            k[i] = (z + (v * k[i+1]) % mod) % mod;
            
        }
        cout<<(1+k[1])%mod<<"\n";
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
