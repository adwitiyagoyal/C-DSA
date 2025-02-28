#include<iostream>

using namespace std;

void rotation(int ar[],int n,int k){

    int ans[n];
    for(int i=0;i<n;i++){
        ans[(i+k)%n]=ar[i];
    }
    for(int i=0;i<n;i++){
        ar[i]=ans[i];
    }

}

int main(){

    int ar[7]={4,3,7,4,6,9,0};
    rotation(ar,7,4);

    for(int i=0;i<7;i++){
        cout<<ar[i]<<" ";
    }
}