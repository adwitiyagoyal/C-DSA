#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void ans(int n,int ar[]){
int s=0,e=n-1;
int sre=0;
int dema=0;
int i=0;
while(s<=e){
    
    if(ar[e]<ar[s]){
        s++;
        if(i%2==0){
        sre=sre+ar[s];
        }
        else{
            dema=dema+ar[e];
        }
    }

    else{
        e--;
        if(i%2==0){
        sre=sre+ar[s];
        }
        else{
            dema=dema+ar[e];
        }


    }

    i++;

}
cout<<sre<<"   "<<dema;

}


int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n][2];

        for(int i=0;i<n;i++){
            cin>>arr[i][0];
            cin>>arr[i][1];
        }

        vector<int> s;
        vector<int> e;

        for(int i=0;i<n;i++){
            s.push_back(arr[i][0]);
            e.push_back(arr[i][1]);
        }

        sort(s.begin(),e.end());
        sort(s.begin(),e.end());

        int l = 0;
        int r = 0;
        int cnt = 0;
        int ans = 0;
        while(r<n){
            if(l<n && s[l]<=e[r]){
                l++;
                cnt++;
                if(cnt>=3){
                    ans++;
                }
            }
            else {
                r++;
                cnt--;
            }
        }

        cout<<n-ans;
    }

    return 0;

    

}
