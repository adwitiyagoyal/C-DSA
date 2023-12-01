#include<iostream>
using namespace std;


int change(int a){

    a=a/2;     // here a is copy of a in main function

    cout<<"value of a is : "<<a<<endl; 

    return a;

}
int main(){

    int a=3;  //original a

    change(a);  // copy of a is sent in a function

    cout<<"value of a is : "<<a<<endl;

}