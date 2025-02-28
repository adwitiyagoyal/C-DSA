#include<iostream>
using namespace std;

int lowerpivot(int ar[],int n){

    int s=0,e=n-1;

    while(s<e){
        int mid = s + (e-s)/2;
        if(ar[mid]>=ar[0]){   // 789123456 //s=0 e=3//s=2 e=3
            s=mid+1;  //s=3 e=5  s=3 e=3
        }
        else {
            e=mid;
        }
    }
    return e;  //we can return both s and e as both are same
}

int upperpivot(int ar[],int n){

    int s=0,e=n-1;

    while(s<(e-1)){
        int mid = s + (e-s)/2;
        if(ar[mid]>ar[0]){
            s=mid;
        }

        else{
           e=mid ;
        }
    }
    return s;      //we cannot return e here 
}



int main(){
    int ar[5]={7,8,9,10,2};
    cout<<upperpivot(ar,5 )<<"  "<<lowerpivot(ar,5);
}