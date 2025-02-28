#include<iostream>
using namespace std;

void print(int *p){
    cout<<"p -> "<<p<<endl;
    cout<<"*p -> "<<*p<<endl;
}
void update(int *p){
    p=p+1;   //pass by value (address)
}
void update1(int *p){
    *p=*p+1;
}

int main(int argc, char const *argv[])
{
    int m =4;
    int *p = &m;
    print(p);
    cout<<"before -> "<<p<<"  "<<*p<<endl;  //
    update(p);
    cout<<"after 1st update -> "<<p<<"  "<<*p<<endl;
    update1(p);
    cout<<"after 2nd update -> "<<p<<"  "<<*p<<endl;
    return 0;
}
