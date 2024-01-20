#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int d){
    //BASE CASE
    if(s.empty()){
        s.push(d);
        return;
    }

    int num = s.top();
    s.pop();

    //RECURSSIVE CALL
    insertAtBottom(s,d);

    s.push(num);
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();

    //Recursive
    reverseStack(s);

    insertAtBottom(s,num);
}

int main(int argc, char const *argv[])
{
    stack<int> s;
    for(int i = 0; i < 6; i++){
        s.push(i);
    }
    reverseStack(s);

    for(int i = 0; i < 6; i++){
        cout<< s.top()<<" ";
        s.pop();
    }
    return 0;
}
