#include<bits\stdc++.h>
using namespace std;

class test{
    public:
     test() {
        cout<<"constructor called"<<endl; 
        
    }
        char *name=new char[100];

        //DEEP COPY CONSTRUCTOR
        test(test &temp){
            char *ch = new char[strlen(temp.name)+1];
            strcpy(ch,temp.name);
            this->name=ch;
        }

};
int main(int argc, char const *argv[])
{
    test deep;
    char ch[]="goyal";
    strcpy(deep.name,ch);
    cout<<deep.name<<endl;
   

    test copy(deep);
    deep.name[0]='l';
    cout<<deep.name<<endl;
    cout<<copy.name<<endl;;

    //COPY ASSIGNMENT OPERATOR
    deep=copy;
    cout<<deep.name<<endl;
    cout<<copy.name;
    return 0;
}


