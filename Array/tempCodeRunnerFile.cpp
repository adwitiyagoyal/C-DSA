#include<iostream>
using namespace std;

int dup(int ar[],int n){

    int sum=0;

    for(int i=0;i<n;i++){

        sum=sum+ar[i];

    }

    int s;
    s=(n*(n-1))/2;

    return sum-s;

}
//alternate
int alt(int ar[],int n){

    int ans=0,s=0;
    for(int i=0;i<n;i++){

        ans=ans^ar[i];
        //s=s^i;
        ans=ans^i;


    }
    return (ans);
    
}

int main(){

    int ar[8]={1,2,3,4,5,4,7,6};

    cout<<alt(ar,8)<<"\n";
    cout<<dup(ar,8);
}