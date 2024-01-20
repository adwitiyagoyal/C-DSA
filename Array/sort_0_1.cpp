#include<iostream>
using namespace std;

int sorting(int ar[],int n){

    int i=0,j=n-1;

        while(i<j){

            if(ar[i]==0){
                i++;
            }
            else if(ar[j]==1){
                j--;
            }           
            else if(ar[i]==1&&ar[j]==0){

                swap(ar[i],ar[j]);
                i++;
                j--;
            }
            
        
    }
}
int main(){



    int ar[8]={1,0,1,0,1,0,0,1};

    sorting(ar,8);

    for(int i : ar){
        cout<< i<<" ";
    }

    
    
}