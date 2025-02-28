#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void sum(int ar1[],int n,int ar2[],int m){
    int i = n-1;
    int j = m-1;
    int s=0,k=0;
    vector<int> v;

    while(i>=0&&j>=0){

        s = ar1[i] + ar2[j] + s/10;
        v.push_back(s%10);
        i--;
        j--;
    }
    

    while(i>=0){        
        s = ar1[i] + s/10;
        v.push_back(s%10);
        i--;
    }
    while(j>=0){
        
        s = ar2[j] + s/10;
        v.push_back(s%10);
        j--;
    }

    //if there is carry 
    if(s/10!=0)
    v.push_back(s/10);
    reverse(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
}
int main(){
    
    int ar1[3]={9,8,7};
    int ar2[2]={5,9};
    sum(ar1,3,ar2,2);

    
}