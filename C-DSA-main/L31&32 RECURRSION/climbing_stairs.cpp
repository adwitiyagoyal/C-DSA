//Time complexity -> O(2^n)
//space complexity -> O(n)

#include<iostream>
using namespace std;
//n->no of stairs
long long no_of_stairs(int n){
    if(n==1||n==0){
        return 1;
    }
    return no_of_stairs(n-1)+no_of_stairs(n-2);
}     

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<no_of_stairs(n);
    return 0;
}
//1836311903