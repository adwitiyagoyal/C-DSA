#include<iostream>

using namespace std;

void move_zero(int ar[],int n){

    int k=0;
    for(int i=0;i<n;i++){
        if(ar[i]!=0){
            swap(ar[i],ar[k]);
            k++;
        }
    }
}

int main(){
    int ar[7]={1,4,0,0,0,8,0};
    move_zero(ar,7);
    for(int i=0;i<7;i++){
        cout<<ar[i]<<" ";

    }
}