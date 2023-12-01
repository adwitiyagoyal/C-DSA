#include<iostream>
using namespace std;
 class test {
    // default we can use only in class function

    public:  // means can be used in main and class function as well
    int age;
    char roll;

    private:  //we can use only in class function
    float percentage;

    //getter and setter  for the value which is private
    //GETTER
    public:

    float getpercentage(){
        return percentage;
    }

    //SETTER
    void setpercentage(float h){
        percentage = h;
    }

    
 };

 int main(int argc, char const *argv[])
 {
    
    test person;
    cout<<"sizeof person is : "<<sizeof(person);
    person.age = 19;
    person.roll = '8';

    cout<<person.getpercentage()<<endl;

    person.setpercentage(9.11);

    cout<<person.getpercentage()<<endl;
   // person.percentage = 9.11; i cannot initialize percentage as it is private

    cout<<person.age<<endl<<person.roll;
    return 0;
 }
 