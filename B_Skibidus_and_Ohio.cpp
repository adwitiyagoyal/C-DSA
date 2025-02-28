#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    for (int i = 0; i < s.size()-1; i++) {
        if(s[i] == s[i+1]){
            cout<<"1\n";
            return;
        }
    }
    cout<<s.size()<<endl;
    return;
    
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