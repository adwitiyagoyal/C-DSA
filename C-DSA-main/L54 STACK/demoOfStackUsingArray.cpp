#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties 
    public:
        int *arr;
        int top;
        int size;
    
    //behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow" <<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<< "stack underflow"<<endl;
        }
    }

    int peak(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<< "stack is underflow";
        }
        
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(int argc, char const *argv[])
{
    Stack s(5);

    s.push(4);
    s.push(1);
    s.push(9);

    cout<< s.peak() << endl;
    return 0;
}
