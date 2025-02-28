#include<bits/stdc++.h>
//#include<queue>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> d;

    d.push_front(5);
    d.push_front(7);
    d.push_front(9);
    d.push_front(11);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();
    d.pop_front();

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    return 0;
}
