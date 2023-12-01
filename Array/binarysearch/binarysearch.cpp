#include<iostream>
using namespace std;

int binarysearch(int ar[],int n,int key){     //array should be monotonic(inc/dec)

        int start=0;
        int end=n-1;

     //   int mid = (start+end)/2;


        while(start<=end){

           int mid = start + (end-start)/2 ;    // we can use s+ (e-s)/2 instead of (s+e)/2 because 
                                                // becuse s+e can go out of range of int

            if(ar[mid]==key){
                return mid;
            }

            if(ar[mid]<key){

                start = mid+1;

            }

            else{
                end=mid-1;
            }
        }

        return -1;


}

int main(){

    int ODDar[9]={2,4,6,8,10,11,13,14,19};
    int EVENar[8]={2,4,6,8,10,12,14,16};

    cout<<binarysearch(ODDar,9,10)<<endl;

    cout<<binarysearch(EVENar,8,13)<<endl;


}