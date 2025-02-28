#include<bits\stdc++.h>
using namespace std;

class test{

    public:
    int roll;

    private:
    char grade;

   

    public:
    char *name=new char[100]; //shallow copy 
 //CONSTRUCTER
    test() {
        cout<<"constructor called"<<endl; 
        
    }


    /*As we write constructor of ours parameter the default constructor
     will be diminished means we cannot use [hero x] if we remove the constructer
     at LINE 16  */

    //PARAMETERISED CONSTRUCTER
    //this KEYWORD is a pointer which stores the value of current obj
    test(int roll){
        cout<<"this -> "<< this <<endl;  //print address of current obj 
        this ->roll =roll;
    }

    test(int roll,char grade){
        cout<<"this -> "<<this<<endl;
        this ->roll=roll;
        this ->grade =grade;
    }
    //COPY Constructor
    test(test & o2){
        this->roll=o2.roll;
        this->grade=o2.grade;
    }

    

    //GETTER
    int getroll(){
        return roll;
    }
    char getgrade(){
        return grade;
    }

    //SETTER
    void setroll(int r){
        roll=r;
    }

    void setgrade(char g){
        grade=g;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<"roll is : "<<this->roll<<endl;
        cout<<"grade is : "<<this->grade<<endl;
        cout<<"name is : "<<this->name<<endl;
    }

    //DESTRUCTOR
    /*It is called automatically for static allocated object
    but for dynamically allocated object  we have to do manually
    by writing {delete }*/
    ~test(){
        cout<<"destructor called"<<endl;
    }

};

int main()
{
    //CHECK FOR PARAMETERISED CONSTRUCTOR

        test x(8);
        cout<<"address of x is : "<<&x<<endl;
        cout<<"value of x : "<<x.getroll()<<endl;

        test *y =new test(89);
        cout<<"address of y is : "<<y<<endl;
        cout<<"value of y : "<<(*y).getroll()<<endl;
        cout<<"value of y : "<<y->getroll()<<endl;

        test *z =new test(45,'S');
        cout<<"address of z is :  "<<z<<endl;
        cout<<"value of z : "<<(*z).getroll()<<endl;
        cout<<"value of z : "<<z->getgrade()<<endl;

        //copy THE CONSTRUCTOR
        test k(*z);
        cout<<"value of k : "<<k.getroll()<<endl;
        cout<<"value of k : "<<k.getgrade()<<endl;

        delete y; //manuall destructor call
        delete z;

    //static ALLOCATION
        cout<<"hi"<<endl;
        test a;  //1st CONSTRUCTER was called here
        cout<<"hello"<<endl;

        a.setroll(98);
        a.setgrade('A');

        cout<<a.getroll()<<endl;
        cout<<a.getgrade()<<endl;


        //COPY CONSTRUCTOR TEST
        test m(x);
        cout<<"value of a in m : "<<m.roll<<endl;
        //cout<<"value of grade in m : "<<m.grade<<endl;
        
    //dynamic ALLOCATION
        test *b= new test;   //2nd CONSTRUCTER is called here

        (*b).setroll(98);         //1st way  *b is taken as b stores the address but *b will ive the value
        b->setgrade('A');         //2nd way

        cout<<b->getroll()<<endl;     //1st way
        cout<<(*b).getgrade()<<endl;  //2nd way


        //shallow copy
            test shallow;
            shallow.setroll(56);
            shallow.setgrade('B');
            char name[8]="goyal";
            shallow.setname(name);  //if we direct write "goyal" here warning will be generated
            
            shallow.print();
            cout<<endl;

            test copyShallow(shallow);
            copyShallow.print();

            cout<<endl;

            shallow.name[0] = 'l';
            shallow.print();

            cout<<endl;

            copyShallow.print(); 
             /*changing goyal to loyal in shallow ,there occur
             a change in [copyShallow] because we have used char *name so address 
             is being copied in copyShallow*/




    return 0;
}