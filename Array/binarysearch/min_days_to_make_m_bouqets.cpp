#include<iostream>
#include<bits\stdc++.h>
using namespace std;
// m-> no of bouqets  k-> no of adjacent flower needed for making 1 bouqet
int ispossible(vector<int> ar,int m,int k,int mid){
    int n=ar.size();
    int count=0;
    int bouqet=0;
    for(int i=0;i<n;i++){
        if(mid>=ar[i]){
            count++;
        }
        else{count=0;}

        if(count==k){
            bouqet++;
            count=0;
        }
    }
    return bouqet;  
}
int min(vector<int>ar){
    int n=ar.size();
    int min=ar[0];
    for(int i=0;i<n;i++){
        if(ar[i]<min){
            min=ar[i];
        }
    }
    return min;
}

int max(vector<int>ar){
    int n=ar.size();
    int max=ar[0];
    for(int i=0;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
        }
    }
    return max;
}

int days(vector<int> ar,int m,int k){
    int s=min(ar);
    int e=max(ar);
    int ans=-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(ispossible(ar,m,k,mid)>=m){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }  
    }
  return ans;  
}
int main(int argc, char const *argv[])
{
    vector<int> ar;
    ar.push_back(1000000000);
    ar.push_back(1000000000);
   // ar.push_back(1000000000);
    cout<<days(ar,1,1);
    return 0;
}
