#include<iostream>
using namespace std;
int mul(int b)
{
return(b*2);
}


int main(int argc, char const *argv[])
{
   int a=4;
   a=mul(a=mul(a=mul(4)));
   cout<<a;
    return 0;
}
