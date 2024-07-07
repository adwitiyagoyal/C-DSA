#include<iostream>
#include<climits>
using namespace std;

void solve(int t,int n,int arr[n]){
    int ans =0;
    
    for(int i=0;i<n-1;i++){
        ans = max(arr[i],arr[i+1]);
    }
    cout<<ans-1<<endl;
}
int main(){
    int t,n;
    int a[n];
    cin>>t;

    for(int i=0;i<n;i++){
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    }



    return 0;
}