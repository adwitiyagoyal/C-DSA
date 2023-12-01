#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int ar[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>ar[i][j];
        }
    }
    int sum1[3];
    int max=0;

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum = sum + ar[i][j];
        }
        cout<<"sum of "<<i+1<<" row : "<<sum<<endl;
        sum1[i]=sum;
         max = sum1[0];
        
        if(sum1[i]>max){
            max=sum1[i];
        }
    }
    cout<<max<<"  "<<endl;
}
