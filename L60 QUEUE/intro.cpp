#include<queue>
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(11);
    cout<<"front : "<<q.front()<<endl;
    cout<<"Back : "<<q.back()<<endl;

    q.push(13);
    cout<<"front : "<<q.front()<<endl;
    cout<<"Back : "<<q.back()<<endl;
    q.push(15);
    q.pop();

    cout<<"front : "<<q.front()<<endl;
    cout<<"Back : "<<q.back()<<endl;

    cout<<"size : "<<q.size()<<endl;

    cout<<"queue is empty : "<<q.empty()<<endl;

    
    return 0;
}
