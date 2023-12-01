//Time complexity -> O(n)
//space complexity -> O(n)
#include<iostream>
using namespace std;

bool isSort(int ar[],int size){
    //Base case
    if(size==1){
        return true; 
    }

    //processing
    if(ar[0]>ar[1]){
        return false;
    }

    isSort(ar+1,size-1);
}

int main(int argc, char const *argv[])
{
    int ar[5]={1,2,4,0};
    cout<<isSort(ar,4);
    return 0;
}
