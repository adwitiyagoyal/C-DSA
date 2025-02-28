#include<iostream>
#include<stack>
using namespace std;

void deleteMiddleElement(stack<int> &s,int count,int size){
    //BASE CASE
    if(count == (size/2)){
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    //RECURSIVE CALL
    deleteMiddleElement(s,count + 1,size);
    
    s.push(num);
}

int main(int argc, char const *argv[])
{
    stack<int> s;
    for(int i = 0; i < 6; i++){
        s.push(i);
    }
    deleteMiddleElement(s,0,6);

    for(int i = 0; i < 6; i++){
        cout<< s.top()<<" ";
        s.pop();
    }
    return 0;
}
