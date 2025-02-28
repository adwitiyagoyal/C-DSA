//Time complexity -> O(2^n)
//space complexity -> O(n)
#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0||n==1)
    return n;

    //fibo(n) = fibo(n-1) + fibo(n-2);
    //cout<<fibo(n-1)+fibo(n-2)<<" ";
    return fibo(n-1)+fibo(n-2);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}
