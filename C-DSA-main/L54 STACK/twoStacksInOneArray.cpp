#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        int* arr;
        int top1;
        int top2;
        int size;

    //behaviour
    Stack(int size){
        this -> size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }
    
    //push in stack1
    void push1(int d){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = d;
        }
        else{
            cout<<"stackOverflow"<<endl;
        }
    }
    //push in stack2
    void push2(int d){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = d;
        }
        else{
            cout<<"stackOverflow"<<endl;
        }
    }

    void pop1(){
        if(top1 > -1){
            top1--;
        }
    }

     void pop2(){
        if(top2 < size){
            top2++;
        }
    }

    //peak element for 1st stack
    int peak1(){
        if(top1 > -1){
            return arr[top1];
        }
        return -1;
    }
    //peak element for 2nd stack
    int peak2(){
        if(top2 < size){
            return arr[top2];
        }
        return -1;
    }


};

int main(int argc, char const *argv[])
{
    
    return 0;
}

