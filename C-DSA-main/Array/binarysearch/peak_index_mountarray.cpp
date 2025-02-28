#include<iostream>
using namespace std;

int peak(int ar[],int n){
    int s=0,e=n-1;
    

    while(s<e){

        int mid =s + (e-s)/2;
        
        if((ar[mid]>ar[mid-1])&&(ar[mid]>ar[mid+1])){
            return ar[mid];
        }
        if(ar[mid]<ar[mid+1]){
            s=mid;
        }
        else if(ar[mid]>ar[mid+1]){
            e=mid;
        }
        //cout<<s<<" "<<e<<endl;
        
    }    

    return -1;
}


int main(){

    int ar[6]={1,6,5,4,3,1};
    cout<<peak(ar,6);
}