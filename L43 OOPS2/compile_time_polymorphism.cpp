//STATIC POLYMORPHISM  OR COMPILE TIME POLYMORPHISM

#include<iostream>
using namespace std;

class A {
    public:

    //All function have same name
    void fn(){
        cout<<"say fn1"<<endl;
    }

    void fn(int n){
        cout<<"say fn1 copy1"<<endl;
    }

    int fn(int n,int n1){
        cout<<"say fn1 copy2"<<endl;
        cout<< n1+n<<endl;
        return 0;
    }

    char fn(char c){
        cout<<"say fn1 copy2"<<endl;
        cout<< (char)(c-1)<<endl;
        return 'A';
    }
};

int main(int argc, char const *argv[])
{
    A a1;
    a1.fn();
    a1.fn(6);
    a1.fn(7,9);
    a1.fn('Z');
    return 0;
}
