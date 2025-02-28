#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s,y;
    
    cin>>s;
    int n = s.size();
    for (int i = 0; i < n-2; i++) {
        y.push_back(s[i]);
    }
    y.push_back('i');
    cout<<y<<endl;
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