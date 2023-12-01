#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int i=98;
    int *ptr=&i;
    int **ptr1=&ptr;

    cout<<"address of ptr1 : \n"<<ptr1<<endl<<&ptr<<"\n\n";

     cout<<"address of i :\n"<<ptr<<endl<<ptr<<endl<<&i<<"\n\n"; //value stored at ptr

     cout<<"value of i :\n"<<**ptr1<<endl<<*ptr<<endl<<i<<endl;


    return 0;
}
