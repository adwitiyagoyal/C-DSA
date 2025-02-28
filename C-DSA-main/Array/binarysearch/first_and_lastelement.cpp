#include<iostream>
using namespace std;

int srt(int ar[],int n,int key){
    
    int start=0;
    int end=n-1;

    while(start<n){

        if(ar[start]==key){
            cout<<start;
            break;
        }

        start++;
    }

    while(end>=0){

        if(ar[end]==key){
            return end;
        
        }

        end--;

    }

    return -1;

}

int main(){

    int ar[6]={1,2,3,3,5,3};

   // srt(ar,6,3);

    cout<<"  "<<srt(ar,6,3);

}


