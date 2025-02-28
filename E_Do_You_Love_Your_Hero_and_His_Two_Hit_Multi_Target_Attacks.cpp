#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bs(ll n){
    ll ans = 0;
    int s = 0;
    int e = 500;
    while(s<=e){
        int i = (s+e)/2;
        int y = (i*(i-1))/2;
        if(y<=n){
            ans = i;
            s = i+1;
        }
        else{
            e=i-1;
        }
    }
    return ans;
}
void solve() {
    int n;
    cin>>n;
    if(n == 0){
        cout<<0<<"\n";
        return;
    }

    vector<int> pairs;
    int t = 0;
    while(n>0){
            ll i = bs(n);
            ll y = (i*(i-1))/2;
            
                t+=i;
                pairs.push_back(i);
                n-=y;
                
            
        
    }
    cout<<t<<"\n";
    for (int i = 0; i < pairs.size(); i++) {
        int z = i*1000;
        int y = i+2;
        for (int j = 0; j < pairs[i]; j++) {
            cout<<z+j<<" "<<y<<"\n";
        }
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