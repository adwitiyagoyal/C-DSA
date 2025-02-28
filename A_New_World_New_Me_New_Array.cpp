#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,p;
    cin>>n>>k>>p;
    k = abs(k);
    int x = ceil(double(k)/double(p));
    if(x>n)cout<<-1<<"\n";
    else{
        cout<<x<<"\n";
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