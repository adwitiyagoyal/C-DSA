#include<iostream>
using namespace std;

class A{
    public:

    void fn1(){
        cout<<"fn1 called"<<endl;
    }


};

class B : public A{
    public:
    void fn2(){
        cout<<"fn2  called"<<endl;
    }
};

class C : public A{
    public:
    void fn3(){
        cout<<"fn3 called"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    A a1;
        a1.fn1();

    B b1;
        b1.fn1();
        b1.fn2();

    C c1;
        c1.fn1();
        //c1.fn2();
        c1.fn3();
    return 0;
}
