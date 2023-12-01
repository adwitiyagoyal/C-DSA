#include<iostream>
using namespace std;

void fibo(int n){
    int a=1,b=0,x=1;

    if(n==1)
    cout<<"0";

    else if(n==2)
    cout<<"0  1";

    else if(n>2){
        cout<<"0  1  ";
        for(int i=1;i<=(n-2);i++){
            a=x;
            x=a+b;
            b=a;
            cout<<x<<"  ";
        }

    }
    
}

int main(){

    int n;

    cout<<"enter n : ";
    cin>> n;
    fibo(n);
}
