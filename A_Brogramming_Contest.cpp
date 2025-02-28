#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int x = 1;
    string s ;
    cin>>s;
    for (int i = 0; i < n-1; i++) {
        if(s[i]!= s[i+1]){
            x++;
        }
    }
    if(s[0] == '0')cout<<x-1<<endl;
    else cout<<x<<endl;
    
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