#include<iostream>
using namespace std;

int setbits(int n){
    int x=0;
    while(n!=0){

        if(n&1){
            x++;
        }
        n=n>>1;
    }

    return x;
}

int main(){
    int a;
    int b;
    cout<< "enter the value of a and b\n";
    cin>>a>>b;

    cout<<"\n"<<setbits(a)+setbits(b);
    
}