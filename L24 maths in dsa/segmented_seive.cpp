#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> p;
void sieve(int n){
    int count=0;
    vector<bool> prime(n+1,true);

    for(int i = 2;i<n;i++){
        if(prime[i]){
            p.push_back(i);
            count++;
            
        }
        for(int j=2*i;j<n;j=j+i){
            prime[j]=0;
        }
    }
}

int segmented_sieve(int l,int h){
    int cnt=0;
    int n = sqrt(h)+1; //we have add +1 becuse we have to also count number which is sqrt(h){if it is a prime nymber}
    
    sieve(n);
    //cout<<p[0]<<" "<<p[1];
    vector<bool> isprime(h-l+1,true);
    for(int x:p){
        int sm =(l/x)*x; //smallest multiple of p less than equal to l
        if(sm<l){
            sm=sm+x;
        }
      //  cout<<sm<<" ";
        for(int i=sm; i<=h; i=i+x){
            isprime[i-l] = false;
        }
    }
    for(int i=l; i<=h; i++){
        if(isprime[i-l]){
            cnt++;
     //     cout<<i<<" ";
        }
    }
    cout<<endl;
    return cnt;
}


// int segmented_seive(int l,int h){
//     int x = pow(h,0.5);

// }

int main(){
    cout<<segmented_sieve(500000,100000000);
}