#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int time(vector<int>arr,int n,int mid){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i];j=j+mid){
            count++;
        }
    }
    return count;
}
int max(vector<int>arr){
    int n = arr.size();
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//h-> max time
int speed(vector<int>arr,int n,int h){
    int s=1;
    int e=max(arr);
    int ans = 0;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(time(arr,n,mid)>h){
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int>arr;
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(20);
    cout<<speed(arr,5,6);
}
