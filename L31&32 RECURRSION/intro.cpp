#include<iostream>
using namespace std;

//Time complexity -> O(n)
//space complexity -> O(n)
int factorial(int n){
    //base case is neccesary
    if(n==0){
        return 1;
    }

    //recurrsive function
    int smallerproblem = factorial(n-1);
    int biggerproblem = factorial(n-1)*n;
    return biggerproblem; 
}

int power(int n,int m){
    //base case
    if(m==0)
    return 1;

    //recurrsive function
    return n*power(n,m-1);
}

void printNumbers(int n){
    //base case
    if(n==0)
        return ;
    cout<<n<<" - ";
    printNumbers(n-1);
    cout<<n<<" / ";
}

int main(int argc, char const *argv[])
{   int n,m;
     cin>>n;
    // cout<<factorial(n);

   // cin>>m;
   // cout<<power(n,m);
   printNumbers(n);
    
    return 0;
}
