#include<iostream>
using namespace std;

void bubbleSorting(int ar[],int n){

    int noOfSwap = 0;
    for(int i=0;i<(n-1);i++){

        for(int j=0;j<(n-i);j++){
            if(ar[j+1]<ar[j]){

                swap(ar[j],ar[j+1]);
                noOfSwap++;
            }
        }
        if(noOfSwap == 0){
            break;    //already sorted
        }
    }
}

int main(int argc, char const *argv[])
{
    int ar[7] = {7,6,5,4,3,2,1};
    bubbleSorting(ar,7);
    for(int i=0;i<7;i++){
        cout<<ar[i]<<" ";

    }
    return 0;
}
