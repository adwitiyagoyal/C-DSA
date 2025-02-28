#include<iostream>
using namespace std;

void rotation(int ar[][3],int n){
    int s=0,e=n;
    int i=0,j=0;
    int count = 0;
    int ans[3][3];
    while(count<n*n){
        //first row ->  coloum
        for(i=s,j=s;j<e && count<n*n ;j++){
            ans[j][e-1] = ar[i][j];
         //   cout<<ans[j][i]<<endl;
            count++;
            
        //    cout<<i<<" "<<j<<endl;
        }
        j--;
        i++;

        // coloum ->  row
        for(;i<e && count<n*n;i++){
            ans[j][e-i-1] = ar[i][j];
            count++;
        }
        i--;
        j--;
         // row -> first coloum
        for(;j>=s && count<n*n;j--){
            ans[j][s] = ar[i][j];
            count++;
        }
        j++;
        i--;
        //first coloum -> first row
        for(;i>=(s+1) && count<n*n;i--){
            ans[s][e-1-i] = ar[i][j];
        }
        i++;
        s++;e--;
    }
    cout<<ans[2][2];
    
    cout<<"original array"<<endl;
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            cout<<ar[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<"rotated array"<<endl;
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            cout<<ans[x][y]<<" ";
        }
        cout<<endl;
    }
}
int main(int argc, char const *argv[])
{
    int ar[3][3]={1,2,3,4,5,6,7,8,9};
    rotation(ar,3);
    return 0;
}
