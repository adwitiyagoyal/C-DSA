#include <bits/stdc++.h>
using namespace std;
int val(int i,int j,int m,int ans,vector<vector<int>> &a){
    if(j==m)return 0;
    int v = i*m + j;
    v-=ans;
    return a[v/m][v%m];
}
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m)),b(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>b[i][j];
        }
    }


    int ans = 0;

    int i=0,j=0,x=0,y=0;
    vector<int> z(n,0);
    for(;x<n;){
        if(a[i][j] == b[x][y]){
            j++;
            y++;
            if(j==m){
                j=0;
                i++;
            }
            if(y==m){
                y=0;
                x++;
            }
        }
        else{
            if(y-ans<=0){
                y++;
                z[x]++;
                if(y==m){
                    y=0;
                    x++;
                }
                ans++;
            }
            else{
                ans = (n-x)*m ;
                break;
            }
        }
    }
    // for (int i = 0; i < n; i++) {
    //     int j = 0;
    //     int x = 0;
    //     bool done = 0;
    //     while(j<m){
    //         bool v = 0;
    //         int d = val(i,x,m,ans,a);
    //         while(j<m && d == b[i][j]){
    //             x++;
    //             j++;
    //             d = val(i,x,m,ans,a);
    //             v = 1;
    //         }
    //         if(j==m){
    //             done = 1;
    //             ans += m-x;
    //             break;
    //         }
    //         else{
    //             x = 0;
    //         }
    //         if(!v) j++;
    //     } 
    //     if(done == 0){
    //         ans+=m;
    //     }
    // }
    cout<<ans<<endl;

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