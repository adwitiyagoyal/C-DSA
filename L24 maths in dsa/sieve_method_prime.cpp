//no of primes till number n
#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int count(int n){
    int count=0;
    vector<bool> prime(n+1,true);

    for(int i = 2;i<n;i++){
        if(prime[i]){
            count++;
        }
        for(int j=2*i;j<n;j=j+i){
            prime[j]=0;
        }
    }
    return count;
}

int main(){
    cout<<count(5000000);
}