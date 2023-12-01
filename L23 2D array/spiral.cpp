#include<iostream>
using namespace std;

void spiral(int n,int m,int ar[][5]){
    int s=0,eR=m,eC=n;
    int ans[n*m];
    int i,j;
    int k=0;
    while(k<n*m){
        //first row
        for(i=s,j=s;k<n*m&&j<eR;j++){
            ans[k]=ar[i][j];
          cout<<ar[i][j]<<" ";
            k++;
        }
        i++;
        j--;
       // cout<<i<<" "<<j;
       //  coloum
        for(;k<n*m&&i<eC;i++){  //after completing series some extra terms are added thatss why k<nis done
            ans[k]=ar[i][j];
           cout<<ar[i][j]<<" ";
            k++;
        }
       // cout<<j<<" ";
        j--;
        i--;
       // cout<<i<<" "<<j<<" ";
        // row
        for(;k<n*m&&j>=s;j--){
            ans[k]=ar[i][j];
           cout<<ans[k]<<" ";
            k++;
        }
        i--;
        j++;
        //first coloum
        for(;k<n*m&&i>=(s+1);i--){
            ans[k]=ar[i][j];
            cout<<ans[k]<<" ";
            k++;
        }
        i++;
        s++;
        eR--;
        eC--;
    }
   // print(ans,n*n);
}
int main(int argc, char const *argv[])
{
    int ar[3][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    spiral(3,5,ar);
    return 0;
}
