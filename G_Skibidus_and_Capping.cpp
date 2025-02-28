#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int MAXN = 200005;
bool prime[MAXN];

vector<int> prime_factors(int x){
    vector<int> a;
    for (int i = 2; i*i <= x; i++) {
        while(x%i == 0){
            a.push_back(i);
            x = x/i;
        }
    }
    if(x>1)a.push_back(x);
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans =0,cnt =0;
    vector<int> one(n+1,0),two_same(n+1,0),two_diff(n+1,0),prod_two_diff(n+1,0);
    for (int i = 0; i < n; i++) {
        vector<int> pf = prime_factors(a[i]);
        if(pf.size()>2)continue;
        if(pf.size() == 1){
            //num is prime
            one[pf[0]]++;
            cnt ++;
            ans += (cnt-one[pf[0]]) + two_diff[pf[0]] + two_same[pf[0]];
        }
        else if(pf[0] == pf[1]){
            //product of same prime
            two_same[pf[0]]++;
            ans += one[pf[0]]+two_same[pf[0]];
        }
        else{
            two_diff[pf[0]]++;
            two_diff[pf[1]]++;
            prod_two_diff[a[i]]++;
            ans += one[pf[0]]+one[pf[1]]+prod_two_diff[a[i]];
        }
    }
    cout<<ans<<endl;
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
