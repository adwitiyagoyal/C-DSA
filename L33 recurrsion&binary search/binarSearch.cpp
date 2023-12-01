//Time complexity -> O(logn)
//space complexity -> O(logn)
#include<iostream>
using namespace std;

bool binarySearch(int ar[],int s,int e,int k){
    //Base Case
    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;
    if(ar[mid]==k){
        return true;
    }
    if(k>ar[mid]){
        return binarySearch(ar,mid+1,e,k);
    }
    if(k<ar[mid]){
        return binarySearch(ar,s,mid-1,k);
    }
}


int main(int argc, char const *argv[])
{
    int ar[6]={1,2,3,4,5,6};
    cout<<binarySearch(ar,0,5,7);
    return 0;
}
