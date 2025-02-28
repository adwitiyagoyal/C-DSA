#include<iostream>
using namespace std;

void sqrt(int *p){
   int a=10;
    p=&a;
    *p=(*p)*(*p);
    cout<<a<<" "<<*p<<" ";
}

int main(int argc, char const *argv[])
{
    int a=10;
    sqrt(&a);
    cout<<a<<endl;
    return 0;
}
