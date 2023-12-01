#include<iostream>
using namespace std;
 class test{
    public:
    static int cons; //static keyword belong to class not to object//
                     //it can be accsessed without initializing object

    //static fuction can use only static objects not like roll grade or name
    static random(){
        return cons; 
    }
 };
 int test :: cons=5;
 int main(int argc, char const *argv[])
 {
    cout<<test::cons<<endl;
    test a;            
    cout<<a.cons<<endl;  //works but not recommended

    test:: cons =7;
    cout<<test::cons<<endl;
    cout<<a.cons<<endl;

    a.cons=8;
     cout<<test::cons<<endl;
    cout<<a.cons<<endl;

    cout<<test::random();




    return 0;
 }
 