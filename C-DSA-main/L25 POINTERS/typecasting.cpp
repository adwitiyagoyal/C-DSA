#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //IMPLICIT TYPECASTING 
    int x=5;
    char c=x;
    cout<<c<<endl;

    //explicit typecasting
    int i=65;
    int *p=&i;
    char *ch = (char*) p;
    cout<<*ch<<endl;

    //here we cannot write 
    // char *ch =p; as integer pointer can,t be stored in char pointer
        return 0;
}
