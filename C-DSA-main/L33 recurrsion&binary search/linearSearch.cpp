//Time complexity -> O(n)
//space complexity -> O(n)
#include<iostream>
using namespace std;

bool linearsearch(int ar[],int size,int k){
    if(size==0){
        return false;
    }
    if(ar[0]==k){
        return true;
    }
    else{
        linearsearch(ar+1,size-1,k);
    }
}

int main(int argc, char const *argv[])
{
    int ar[4]={1,43,3,7};
    cout<<linearsearch(ar,4,45);
    return 0;
}
