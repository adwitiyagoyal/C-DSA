#include<iostream>
using namespace std;

bool ispossible(int ar[],int n,int k,int mid){

    int pagesum=0;
    for(int i=0; i<n; i++){

        if(pagesum +  ar[i] <= mid){

            pagesum += ar[i];

        }

        else{
            studentcount++;
            if(studentcount > k || ar[i] > mid){
                return false;
            }
            else{
                pagesum = ar[i];
            }
        }
    }
    return true;
}

int partition(int ar[],int n,int k){// n->no of boards  k-> no of painters

        int ans=-1;
        int s=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum = sum + ar[i];
        }
        while(s<=sum){
            int mid = s + (sum-s)/2;

            if(ispossible(ar,n,k,mid)){
                ans = mid;
                sum = mid-1;
            }
            else{
                s=mid+1;
            }

            
        }
    return ans;
}

int main(){
    int ar[5] = {10,20,45,13,50};
    cout<<partition(ar,5,3);
}