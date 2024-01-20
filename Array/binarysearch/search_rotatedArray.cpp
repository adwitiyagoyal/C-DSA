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

int search(int ar[],int n,int key){

    int s=0,e=n-1;

        if(key>=ar[0]){

            e=lowerpivot(ar,n)-1;
            while(s<e){
                int mid=s+(e-s)/2;

                if(key>ar[mid]){
                    s=mid+1;
                }
                else{
                    e=mid;
                }
            }
            return s;

        }

        else if(key<ar[0]){

            s=lowerpivot(ar,n);
            while(s<e){
                int mid=s+(e-s)/2;

                if(key>ar[mid]){
                    s=mid+1;
                }
                else{
                    e=mid;
                }               
            }
            return s;

        }
    
}

int main(){

    int ar[5]={9,1,2,3,4};
    cout<<search(ar,5,9);
}