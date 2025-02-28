#include<iostream>
using namespace std;
//pass by value
void update(int n){
    n++;
}

//why
//pass by referene
void update1(int &n){
    n++;
}

//WHY not
//WARNING CAN BE GENERATED {BAD PRACTISE} //return by reference
int &warn(int n){
    int num =n;   //because of loCAL  variable
    int &ans=num;

    return ans;
}

//WARNING WITH POINTER BECAUSE OF LOCAL PTR
int *fun(int n){
    int num=n;
    num++;
    int *ptr=&num;
    return ptr;
}
int main(int argc, char const *argv[])
{
    int i=5;
    cout<<i<<endl;
    update(i);
    cout<<i<<endl;
    update1(i);
    cout<<i<<endl;
    warn(i);
    cout<<i<<endl;
    fun(i);
    cout<<i<<endl;
    return 0;
}
