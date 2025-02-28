#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve() {
    ll n,k;
    cin >> n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d = n-k;
    if(d == 0){
        int c = 1;
        for(int i=1;i<n;i+=2){
            if(a[i]!=c){
                cout<<c<<endl;
                return;
            }
            c++;
        }
        cout<<c<<endl;
        return;
    }
    for(int i=1;i<=d+1;i++){
        if(a[i] != 1){
            cout<<1<<endl;
            return;
        }
    }
    int c = 2;
    cout<<c<<endl;
    return;
    
    
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}