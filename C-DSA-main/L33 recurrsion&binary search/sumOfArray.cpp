//Time complexity -> O(n)
//space complexity -> O(n)
#include<iostream>
using namespace std;

int sum(int arr[],int size){
    // if(size==0){
    //     return 0;
    // }
    if(size==1){
        return arr[0];
    }

    return arr[0] + sum(arr+1,size-1);
}

int main(int argc, char const *argv[])
{
    int ar[7]={1,2,3,4,6,78,3};
    cout<<sum(ar,7);
    return 0;
}
