#include<iostream>
using namespace std;

void sorting(int ar[],int n){

    for(int i=0;i<n-1;i++){

        int minindex = i;

        for(int j=i+1; j<n; j++){  //

            if(ar[j]<ar[minindex]){

                minindex = j;

            }
            
        }
       // cout<<ar[minindex]<<" ";
        swap(ar[i],ar[minindex]);
    }

}

int main()
{
    int ar[4]= {5,2,9,4};

    sorting(ar,4);

     for(int i=0 ;i<4 ;i++){
         cout<<ar[i]<<"  ";
    }
}
