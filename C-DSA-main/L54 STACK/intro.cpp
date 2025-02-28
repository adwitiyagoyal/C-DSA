#include<iostream>
#include<stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> s;
    //Adding element
    s.push(2);
    s.push(4);
    s.push(6);

    //removing element
    s.pop();

    cout<< "Top element is "<< s.top() <<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    //Size  
    cout<<s.size();

    return 0;
}
