#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve() {
    int n,m;
    cin>>n>>m;
    ll score = 0;
    ll s1 = 0;
    vector<pair<ll,ll>> p1;
    for (int i = 0; i < n; i++) {
        ll y=0;
        s1 = 0;
        for (int j = 0; j < m; j++) {
            ll x;
            cin>>x;
            y+=x;
            s1+=y;
        }
        score += s1;
        p1.push_back({y,s1});
    }

    sort(p1.begin(), p1.end(), [](auto &a, auto &b) { return a.first > b.first; });
    for (int i = 0; i < p1.size(); i++) {
        score += m*(n-i-1)*p1[i].first;
    }
    cout<<score<<endl;
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