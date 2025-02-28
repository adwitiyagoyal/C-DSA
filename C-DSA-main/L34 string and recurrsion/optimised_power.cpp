//Time complexity -> O(log base2 n)
//space complexity -> O(log base2 n)
#include<iostream>
using namespace std;

int power(int m,int n){
    if(n==0){
        return 1;
    }
    //n is odd
    if(n&1){
        return m*power(m,n/2)*power(m,n/2);
    }
    //n is even
    else{
        return power(m,n/2)*power(m,n/2);
    }

}

int main(int argc, char const *argv[])
{
    cout<<power(5,8);
    return 0;
}
