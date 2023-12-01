#include<iostream>
using namespace std;

void swap(char *x,char *y){
    char *t =x;
    x=y;
    y=t;
}
int main()
{
    char *x = "ninja";
    char *y = "coding";
    swap(x,y);
    cout<<"function  prakop :  "<<x<<"  "<<y<<endl;

    char *t=x;
    x=y;
    y=t;
    cout<<"main function prakop :  "<<x<<"  "<<y<<endl;
    return 0;
}
