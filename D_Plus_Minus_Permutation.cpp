#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers 
long long LCM(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    ll l = LCM(x,y);
    ll u = n/x;
    ll v = n/y;
    ll z = n/l;
    ll f = n-(u-z);
    ll g = v-z;
    ll a = ((n*n-f*f-g*g -f -g)+(n))/2 ;
    cout<<a<<"\n";
    

    

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