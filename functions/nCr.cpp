#include<iostream>
using namespace std;


int fac(int a){
    int ans=1;
    for(int i=1;i<=a;i++){
        ans=ans*i;
    }
    return ans;
}

int nCr(int n,int r){
    cout<<"enter n and r : ";
    cin>>n>>r;

    int res;
    if(n>=r){
    res=fac(n)/(fac(r)*fac(n-r));
    return res;
    }

    else{
    cout<<"wrong input\n";
    return 0;
    }


    

 }

 int main(){
    int n,r;
    
        cout<< "answer is : " <<nCr(n,r);
    
    
    return 0;
 }