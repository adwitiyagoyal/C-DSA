#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
const ll mod = 998244353;

int so(int i, int o, int s, int t, vector<int> &a, ll dp[][2][2][2], int n) {
    if (t == 1) {
        return 1;
    }
    if (i == n) {
        return 0;
    }
    if (dp[i][o][s][t] != -1) {
        return dp[i][o][s][t];
    }
    ll ans = so(i+1, o, s, t, a, dp, n);
    if (a[i] == 1) {
        if (o == 0 && t == 0) {
            ans = (ans + so(i+1, 1, 0, 0, a, dp, n)) % mod;
        }
    }
    else if (a[i] == 2) {
        if (o != 0) {
            ans = (ans + so(i+1, 1, 1, 0, a, dp, n)) % mod;
        }
    }
    else {
        if (o != 0 && s != 0) {
            ans = (ans + so(i+1, 1, 1, 1, a, dp, n)) % mod;
        }
    }
    return dp[i][o][s][t] = ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    ll dp[n+2][2][2][2];
    memset(dp, -1, sizeof(dp));

    ll ans = so(0, 0, 0, 0, a, dp, n);
    cout << ans << "\n";
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
