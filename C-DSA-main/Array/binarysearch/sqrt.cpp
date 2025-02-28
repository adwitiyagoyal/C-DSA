#include<iostream>
using namespace std;

int sqrt(int x){
    long long int ans=-1;

    int s=0,e=x;
    long long int mid=s+(e-s)/2;
    

    while(s<=e){
        long long int sq=mid*mid;
        if(sq==x){
            return mid;
        }
        if(sq<x){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
}
return ans;
}

float precision(int digits,int integer,int x){
    double ans=integer;
    double factor =1;
    for(int j=0;j<digits;j++){
        factor=factor/10;
        for(double i=ans;(i*i)<x;i=i+factor){            
            ans=i;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int integer = sqrt(n);
    cout<<precision(4,integer,n);

}

// float precision(int digits,int integer,int x){

//     double factor = 1,ans=0;
//     double j;
//     for(int i=0; i<digits; i++){

//         factor=factor/10;
        
//         for(j=integer; j*j < x ;j=j+factor){

//             ans=j;
//         }
//     }
//     return ans;
// }

