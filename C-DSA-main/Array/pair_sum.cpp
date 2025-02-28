#include<iostream>
using namespace std;
 int sum(int ar[],int n,int s){

    for(int i=0;i<n;i++){
        for(int j=(i+1);j<n;j++){
            if((s-ar[i])==ar[j]){
                cout<<min(ar[i],ar[j])<<" "<<max(ar[i],ar[j])<<endl;

            }
        }
    }
 }

 int main(){

    int arr[6]={6,8,4,2,0,1};
    sum(arr,6,7);
 }



 //if the array is sorted 

//  int s=0 ,e=n-1;
//  int sum=0;
//  while(s<e){
//     sum=ar[s]+ar[e];
//     if(sum<k){}
//  }


