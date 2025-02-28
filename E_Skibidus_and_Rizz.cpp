#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    swap(n,m);
    if(k>max(n,m)){
        cout<<-1<<endl;
        return;
    }
    if(abs(n-m)>k){
        cout<<-1<<endl;
        return;
    }
    if(k == max(n,m)){
       
            for (int i = 0; i < n; i++) {
                cout<<"1";
            }
            for (int i = 0; i < m; i++) {
                cout<<"0";
            }
        cout<<endl;
        return;
    }
    if(n>m){
        n-=k;
        if(m-n<=k){
            for (int i = 0; i < k; i++) {
                cout<<"1";
            }
            bool z = 1;
            for (int i = 0; i < 2*n; i++) {
                if(z){
                    z = 0;
                    
                cout<<"0";
                }
                else{
                    z = 1;
                    cout<<"1";
                }
            }
            for (int i = 0; i < m-n; i++) {
                cout<<"0";
            }
            cout<<endl;
            return;
        }
    }
    else{
        m-=k;
        if(n-m<=k){
            for (int i = 0; i < k; i++) {
                cout<<"0";
            }
            bool z = 1;
            for (int i = 0; i < 2*m; i++) {
                if(z){
                    z = 0;
                    
                cout<<"1";
                }
                else{
                    z = 1;
                    cout<<"0";
                }
            }
            for (int i = 0; i < n-m; i++) {
                cout<<"1";
            }
            cout<<endl;
            return;
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