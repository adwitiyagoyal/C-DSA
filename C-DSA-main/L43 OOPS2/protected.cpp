#include<iostream>
#include<string.h>
using namespace std;

class fox{
    public:
        int age;
        int weight;
        int height;

    void setweight(int weight){
        this->weight=weight;
    }

};
class rock : protected fox{
    
    public:
    rock(){
        cout<<"proteted rock called"<<endl;
    }
    void setage(int age){
        this->age = age;
    }

    void getage(){
        cout<< this->age<<endl;
    }
};

int main(int argc, char const *argv[])
{
    //PROTECTED CLASS TESTING
    rock r1;
    r1.getage();
    r1.setage(76);
    r1.getage() ;
    return 0;
}
