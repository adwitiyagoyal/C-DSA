#include<iostream>
using namespace std;
void sorting(int ar[] , int n){

    for(int i=0;i<n;i++){
        int minindex = i ;
        for(int j=i ;j<n ;j++){

            if(ar[j]<ar[minindex]){

                minindex = j;
            }
        }
        swap(ar[minindex],ar[i]);
    }
}

bool ispossible(int ar[],int n,int k,int mid){
    int lastpos=ar[0];
    int cowCount=1;

    for(int i=0;i<n;i++){
        if(ar[i]-lastpos >=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastpos=ar[i];
        }
        
    }
    return false;
}

int placement(int ar[],int n,int k){     // k-> no of cows

    int s = 0;
    sorting(ar,n);
    int e = (ar[n] - ar[0]);
    int ans = -1;

    while(s<=e){
        int mid= s+ (e-s)/2;

        if(ispossible(ar,n,k,mid)){
            s=mid+1;
            ans = mid;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;

}

int main(){

    int ar[6]={6,3,8,4,1,9};
    cout<<placement(ar,6,3);
}