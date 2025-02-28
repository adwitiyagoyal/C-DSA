#include<iostream>
using namespace std;
 int main(int argc, char const *argv[])
 { //POINTER SIZE IS NOT FIXED
//GENERALLY FOR 32 BIT PC IT IS 4 byte
//and FOR 64 BIT PC IT IS 8 __BYTE

    int *p2;//initialising any pointer without any address is bad practise

    int num = 23;
    int *ptr = &num;
    cout<<"num is "<<num<<endl;
    cout<<"num is "<<*ptr<<endl;
    cout<<"address of num is "<<ptr<<endl;
    cout<<"size of int is "<<sizeof(num)<<endl;
    cout<<"size of pointer containing int is "<<sizeof(ptr)<<endl<<endl;

    double num1 = 2.3;
    double *ptr1 = &num1;
    cout<<"num is "<<num<<endl;
    cout<<"num is "<<*ptr1<<endl;
    cout<<"address of num is "<<ptr1<<endl;
    cout<<"size of double is "<<sizeof(num1)<<endl;
    cout<<"size of pointer containing double is "<<sizeof(ptr1)<<endl<<endl;

    //null pointer
    int *p3=0;
    p3=&num ;   //same as int *ptr=&num;

    int a = *p3;
    a++;
    cout<<a<<endl;

    (*p3)=*p3+2;
    cout<<*p3<<endl;

    //Copy pointer to another pointer
    int *q = p3;
    cout<<q<<"  -  "<<p3<<endl;
    cout<<*q<<"  -  "<<*p3<<endl;
    cout<<q<<endl;
    q=q+1; //on incrementing address the q pointer points to next integer means addition of 4 bit
    cout<<q<<endl;
     cout<<*q<<endl;

    return 0;
 }
 