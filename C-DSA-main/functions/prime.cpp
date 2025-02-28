#include<iostream>
using namespace std;


// prime ->1 // composite ->0
bool prime(int a){
    if(a>=2){
        int i;
        for(i=2;i<a;i++){
            if(a%i==0){
                return 0;
                
            }
        }
        
            return 1;
        
    } 
    else 
    return 0;   
}

int main (){
    int n;
    cout<<"enter the number :  ";
    cin>>n;

    if(prime(n)&1){
        cout<<"prime number";
    }
    else
    cout<<"not prime";
    return 0;
}
