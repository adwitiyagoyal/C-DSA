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
/* in PROTECTED class the obj can be accesed
 only in that partiular[PARENT] class or child[derived] class */

class rock : protected fox{
    
    public:
    // rock(){
    //     cout<<"proteted rock called"<<endl;
    // }
    // void setage(int age){
    //     this->age = age;
    // }

    void getage(){
        cout<< this->age;
    }
};

//CHILD CLASS
class cox : public fox{  //here cox is child class :: fox->PARENT CLASS
    public:
        char *color=new char[43];
    cox(){
    cout<<"child class called"<<endl;
    }
};

int main(int argc, char const *argv[])
{   cox a1;
    a1.age=43;
    a1.weight=23;
    a1.height=170;
    char name[]="brown";
    strcpy(a1.color,name);
    cout<<a1.age<<endl;
    cout<<a1.weight<<endl;
    cout<<a1.height<<endl;
    cout<<a1.color<<endl;
    a1.setweight(56);
    cout<<a1.weight<<endl;


    //PROTECTED CLASS TESTING
    rock r1;
    // r1.getage();
    // r1.setage(76);
   cout << r1.getage() << endl;

    return 0;
}
