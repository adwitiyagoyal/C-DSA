#include<iostream>
#include<queue>

// THE ELEMENT WHICH IS INSERTED FIRST WILL COME FIRST

using namespace std;

int main(){

    queue<string> q;

    q.push("adwitiya");
    q.push("goyal");
    q.push("lucky");

    cout<<"front element is :  "<<q.front()<<endl;
    cout<<"size before pop "<<q.size()<<endl;

    q.pop();

    cout<<"front element is :  "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;
}