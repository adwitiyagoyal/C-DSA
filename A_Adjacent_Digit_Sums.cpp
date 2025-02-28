#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,y;
    cin>>x>>y;
    if(y-x == 1){
        cout<<"Yes\n";
    }
    else if(x-y+1 >= 0 &&(x-y+1)%9 == 0){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
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