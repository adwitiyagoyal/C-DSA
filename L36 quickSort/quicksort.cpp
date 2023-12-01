//TIME complexity - O(nlogn)[other than worst case]
// time complexity - O(n^2)[worst case]
//space complxity - O(n)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&ar,int s,int e){
    int pivot=ar[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(ar[i]<=pivot)
        count++;
    }
    int pivotindex=count+s;
    swap(ar[pivotindex],ar[s]);
    int i=s,j=e;
    while(i<pivotindex&&j>pivotindex){
        while(ar[i]<=pivot){
            i++;
        }
        while(ar[j]>pivot){
            j--;
        }
        if(i<pivotindex&&j>pivotindex){
            swap(ar[i],ar[j]);
        }
    }
    return pivotindex;

}

void quicksort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }

    int p=partition(arr,s,e);

    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

}

int main(){
     vector<int> v;
        v.push_back(5);
        v.push_back(1);
        v.push_back(1);
        v.push_back(2);
        v.push_back(0);
        quicksort(v,0,v.size()-1);
       // merge(v,0,v.size()-1);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        return 0;
}