#include<iostream>
#include<climits>
using namespace std;
//long approach COMPLEX

int arint(int ar[],int n,int AR[],int m){

    int sum=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(ar[i]==AR[j]){
                
                cout<<ar[i]<<" ";
                sum=sum+ar[i];
                AR[j]=INT_MIN;                //ANY NUMBER WHICH IS NOT IN RANGE OF ARRAY
                break;
            }

        }

    }

    if(sum==0)
        return -1;

    else 
    return 0 ;        

}

//SHORT APPROACH
void intersection(int ar[],int n, int AR[],int m){
    int i=0,j=0;
    while(i<n&&j<m){
        if(ar[i]==AR[j]){
            cout<<ar[i]<<" ";
            i++;
            j++;
        }

        if(ar[i]>=AR[j]){
            j++;
        }

        if(ar[i]<=AR[j]){
            i++;
        }
    }
}

int main(){

    int ar[5]={1,2,2,3,4};
    int arr[3]={2,3,3};

   //  arint(ar,5,arr,3);
    intersection(ar,5,arr,3);
    


}
