#include<iostream>
using namespace std;

int telement(int ar[],int n,int key){

    int s = 0,e = n-1;
    int ans=-1;

    while(s<=e){
       int mid = s + (e-s)/2 ;
        if(ar[mid]==key){

            ans=mid;
            e=mid-1;

        }
        else if(ar[mid]>=key){

            e=mid-1;

        }
        else if(ar[mid]<=key){

            s=mid+1;

        }
    }
    return ans;
}

int element(int ar[],int n,int key){

    int s = 0,e = n-1;
    int ans=-1;

    while(s<=e){
       int mid = s + (e-s)/2 ;
        if(ar[mid]==key){

            ans=mid;
            s=mid+1;

        }
        else if(ar[mid]>=key){

            e=mid-1;

        }
        else if(ar[mid]<=key){

            s=mid+1;

        }
    }
    return ans;
}

int main(){

    int ar[6]={1,2,3,3,3,3};
    cout<<"t occurnce is "<<telement(ar,6,3)<<endl;
    cout<<" occurance is "<<element(ar,6,3)<<endl;

    int total_occurance = element(ar,6,3) - telement(ar,6,3) + 1;
    cout<<"total occurance is "<<total_occurance;

}