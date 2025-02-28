#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int prev;
    vector<int> a;
    for (int i = 0; i < (n*(n-1))/2; i++) {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int z = 0;
    for (int i = 0; i < n-1; i++) {
        int maxi = INT_MIN;
        for (int j = 0; j < n-1-i; j++) {
            maxi = max(maxi,a[z]);
            z++;
        }
        prev = maxi;
        cout<<prev<<" ";
    }
    cout<<prev<<endl;
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