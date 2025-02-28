#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    vector<int> ax;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>a[i][j];
        }
        ax.push_back(0);
        while(a[i].size() && a[i].back() == 1){
            ax.back()++;
            a[i].pop_back();
        }
    }

    sort(ax.begin(),ax.end());
    int c = 0;
    for (int i = 0; i < ax.size(); i++) {
       c = min(c+1,ax[i]); 
    }
    cout<<min(n,c+1)<<endl;
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