//DYNAMIC POLYMORPHISM 
//FUNCTION OVERRIDING

#include<iostream>
using namespace std;

class A{
    public:
    void speak(){
        cout<<"speak in A"<<endl;
    }
};

class B : public A{
    
};

//RUN TIME POLYMORPHISM
class C : public A{
    public:
    void speak(){
        cout<<"speak in C"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    B b1;
    C c1;
    b1.speak();
    c1.speak();
    return 0;

}
