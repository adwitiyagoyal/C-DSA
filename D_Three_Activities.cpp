#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> p;
void solve() {
    int n;
    cin>>n;
    vector<p> a(n),b(n),c(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        a[i] = {x,i};
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        b[i] = {x,i};
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        c[i] = {x,i};
    }
    auto cmp = [](const p &x, const p &y) {
        return x.first > y.first;
    };
    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end(), cmp);
    sort(c.begin(), c.end(), cmp);
    ll sum = 0,ans = 0;
    for (int i = 0; i < 3; i++) {
        sum+=a[i].first;
        int cnt = 0;
        for (int j = 0; j < 3; j++) {
            bool isp1 = false;
            if(b[j].second != a[i].second){
                sum+=b[j].first;
                cnt++;
                isp1 = true;
            }
            else{
                continue;
            }
            for (int k = 0; k < 3; k++) {
                bool isp = false;
                if(c[k].second != a[i].second && c[k].second != b[j].second){
                    sum+=c[k].first;
                    cnt++;
                    isp = true;
                }
                if(cnt == 2){
                    ans = max(ans,sum);
                }
                if(isp){
                    cnt--;
                    sum-=c[k].first;
                }
            }
            if(isp1){
                cnt--;
                sum-=b[j].first;
            }
        }
        sum-=a[i].first;
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