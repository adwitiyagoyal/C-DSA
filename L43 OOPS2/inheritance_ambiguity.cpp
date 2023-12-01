#include<iostream>
using namespace std;

class A{
    public:

    void fn(){
        cout<<"fn1 called"<<endl;
    }


};

class B {
    public:
    void fn(){
        cout<<"fn2  called"<<endl;
    }
};

class C : public A,public B{
   // public:
    
};
int main(int argc, char const *argv[])
{
    C obj1;
    obj1.A :: fn();
    obj1.B :: fn();
    return 0;
}
