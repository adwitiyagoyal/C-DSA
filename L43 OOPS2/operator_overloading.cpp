//PART OF COMPILE TIME POLYMORPHISM
#include<iostream>
using namespace std;

class A {
    public:
    int a;
    int b;

    void add(){
        cout<<"sum is : "<<this->a + this->b<<endl;
    }

    void operator+ (A &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output is : "<<value2*value1<<endl;
        cout<<"NEW aDDITION"<<endl;
    }

    void operator() (){
        cout<<"[] bracket abhi soya! hai : "<<this->b<<endl;
    }
};

int main()
{
    A a1,a2;
    a1.a=5;
    a1.b=9;
    a2.a=2;

    a1.add();

    a1+a2;

    a1();
    return 0;
}
