#include<iostream>
using namespace std;
//TO FIND  (X^N)%m
int modular_expo(int x,int n,int m){
    int res=1;

    while(n>0){
        //FOR ODD
        if(n&1){
            res =(1LL*(res%m)*(x%m))%m; //1LL means typecasting with long long 
        }
        x = (1LL*(x%m)*(x%m))%m;
        n=n>>1;
    }
    return res;
}

int main(){
    cout<<modular_expo(5,2,10);
}