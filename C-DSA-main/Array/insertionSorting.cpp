#include<iostream>
using namespace std;

void insertionSorting(int ar[],int n){

    for(int i=1;i<n;i++){
      //  int temp = ar[i];
        for(int j=i-1;j>=0;j--){
            if(ar[j+1]<ar[j]){
                swap(ar[j+1],ar[j]);
            }
            else
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int ar[7] = {3,8,10,4,3,2,1};
    insertionSorting(ar,7);
    for(int i=0;i<7;i++){
        cout<<ar[i]<<" ";

    }
    return 0;
}