#include<iostream>
#include<stack>
using namespace std;

void insertInSortedWay(stack<int> &s, int num){
    if(s.empty() || (!s.empty() && num > s.top())){  //to check whether num is grester or not or it is empty 
        s.push(num);
        return;
    }

    int value = s.top();
    s.pop();

    insertInSortedWay(s,num);

    s.push(value);
}

void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();

    sortStack(s);

    insertInSortedWay(s,num);
}

int main(int argc, char const *argv[])
{
    stack<int> s;
    for(int i = 0; i < 6; i++){
        s.push(6-i);
    }

    s.push(-6);
    sortStack(s);

    for(int i = 0; i < 7; i++){
        cout<< s.top()<<" ";
        s.pop();
    }
    return 0;
}
