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

};

class cat : public animal{
    public:
   cat(){
    cout<<"cat called"<<endl;
   }
    
};
class meow : public cat{
    public:
    meow(){
    cout<<"meow called"<<endl;
   }
};

int main(int argc, char const *argv[])
{
    meow m1;
    cout<<m1.grade<<endl;
    return 0;
}
