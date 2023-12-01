#include<iostream>
using namespace std;

class animal{
    public:

    int height;
    int age;
    char grade;
    animal(){
    cout<<"animal called"<<endl;
    }
    void quark(){
        cout<<"visiting Quark"<<endl;
    }

};

class monkey{
    public:

    void HFC(){
        cout<<"visiting HFC"<<endl;
    }

};

class deer : public animal,public monkey{

};
int main(int argc, char const *argv[])
{
    deer d1;
    d1.quark();
    d1.HFC();
    cout<<d1.age<<endl;
    return 0;
}
