#include<iostream>
using namespace std;

// function
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}


int main(){

    int a,b;
    cout<<"enter a and b\n";
    cin>>a>>b;
    cout<<"Answer is  "<<power(a,b)<<endl;
    return 0;

}