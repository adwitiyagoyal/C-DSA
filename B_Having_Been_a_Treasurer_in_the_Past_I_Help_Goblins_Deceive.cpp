#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    long long int a=0,b=0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i]=='-'){
            a++;
        }
        else{
            b++;
        }
    }
    
    long long int ans = 0;
    if(a<2 || b==0){
        ans = 0;
    }
    else{
        ans = (a/2)*(a-(a/2))*b;
    }
    cout<<ans<<"\n";
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