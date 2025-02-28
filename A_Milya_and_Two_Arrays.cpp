#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    unordered_map<int,int> m1,m2;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        m1[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        cin>>b[i];
        
        m2[b[i]]++;
    }

    if(m1.size() + m2.size() > 3){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
//GOYAL's !!! //
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ul;
void solve() {
    
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