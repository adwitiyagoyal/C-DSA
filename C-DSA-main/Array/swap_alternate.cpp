#include<iostream>
using namespace std;

void swapalt(int ar[],int n){

    int i=0;
                            //alternate
    while((2*i+1)<n){       //i+1

        int x=ar[2*i+1];
        ar[2*i+1]=ar[2*i];  //without using swap library function
        ar[2*i]=x;
        i++;                 //i=i+2


    }

    for(int j=0;j<n;j++){

        cout<<ar[j]<<" ";

    }
}

int main(){

    int ar[4]={1,2,3,5};

    swapalt(ar,4);

}