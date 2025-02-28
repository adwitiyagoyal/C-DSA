#include<iostream>
#include<stack>

using namespace std;
//IN STACK THE THING WE PUT IN LAST COME FIRST
int main(){

    stack<string> s;

    s.push("adwitiya");
    s.push("goyal");
    s.push("lucky");

    cout<<"top element ->"<< s.top()<<endl;

    s.pop();

    cout<<"top element ->"<< s.top()<<endl;
    cout<<"size of stack : "<<s.size()<<endl;

    cout<<"empty or not : "<<s.empty()<<endl;
}