#include<iostream>
using namespace std;
void print(int ar[],int m){
    for(int i=0;i<m;i++){
        cout<<ar[i]<<" ";
    }
}

void sine(int ar[][4],int mrows ,int ncols){
    int ans[mrows*ncols];
    int k=0;
    for(int i=0;i<ncols;i++){
        if(i&1){
            
            for(int j=(mrows-1);j>=0;j--){
                ans[k++]=ar[j][i];
            }
        }
        else{
            for(int j=0;j<mrows;j++){
                ans[k++]=ar[j][i];
            }
        }
    }
    print(ans,mrows*ncols);
}

int main(){

    int ar[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    sine(ar,3,4);
}      
// 1234
// 5678
// 9 10 11 12