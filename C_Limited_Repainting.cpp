//ADWITIYAGOYAL105___||!||___GOYAL //
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ul;
bool ispos(ll mid,ll n,ll k,vector<int> &a,string s){
    ll oper = 0;
    ll i=0;
    while(i<n) {
        if(s[i] == 'R' && a[i]>mid){
            i++;
            continue;
        }
        bool paint = 0;
        bool z = 0;
        while(i<n && !(s[i]=='R' && a[i] > mid)){
            if(s[i] == 'B' && a[i]>mid){
                paint = 1;
            }
            z = 1;
            i++;
        }
        if(paint){
            oper ++;
        }
    }
    if(oper<=k){
        return true;
    }
    return false;
}
void solve() {
    int n,k;
    cin>>n>>k;
    string st;
    cin>>st;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    ll y = *max_element(a.begin(),a.end());

    ll s = 0,e = y;
    ll ans = y;

    while(s<=e){
        ll mid = s+(e-s)/2;
        if(ispos(mid,n,k,a,st)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
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