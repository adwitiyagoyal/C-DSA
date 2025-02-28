#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    if(n%2){
        cout<<"No\n";
        return;
    }
    sort(a.begin(),a.end());
    if(a[0] != a[1]){
        cout<<"No\n";
        return; 
    }
    int prev = a[0]+1;
    for (int i = 2; i < n-1; i+=2) {
        prev = max(prev,a[i]);
        a[i] = prev;
        if(a[i] < a[i+1]){
            cout<<"No\n";
            return; 
        }
        else{
            prev ++;
        }
    }
    cout<<"Yes\n";

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