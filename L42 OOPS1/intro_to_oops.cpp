#include<iostream>
#include "more.cpp" //another method for accessing class
using namespace std;

class hero{
    //properties
    int health;
};

class zero{
    //empty
};


int main(int argc, char const *argv[])
{
    hero h1;
    zero z1;
    more m1;
    cout<<"size of hero : "<<sizeof(h1)<<endl;

    //size of empty class is 1 as it help for its identification and location
    cout<<"size of zero : "<<sizeof(z1)<<endl;

    cout<<"size of more : "<<sizeof(m1)<<endl;
    return 0;
}
