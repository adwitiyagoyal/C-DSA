//ADWITIYAGOYAL105___||!||___GOYAL //
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ul;
void solve() {
    ll n,x,k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    ll cnt = 0;

    for (int i = 0; i < n; i++) {
        if(s[i] == 'L'){
            x--;
        }
        else{
            x++;
        }
        k--;
        if(x == 0){
            cnt++;
            break;
        }
    }
    if(cnt==0){
        cout<<0<<"\n";
        return;
    }
    ll c = 0;
    ll step = 0;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'L'){
            c--;
        }
        else{
            c++;
        }
        if(c==0){
            step = i+1;
            break;
        }
    }
    if(step == 0){
        cout<<cnt<<"\n";
    }
    else{
        cnt += (k/step);
        cout<<cnt<<"\n";
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