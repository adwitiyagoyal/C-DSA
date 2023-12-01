#include<iostream>
#include<deque>

using namespace std;
int main(){

    deque<int>d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // 0 th index element
    cout<<"0 th index element : "<<d.at(0)<<endl;

    //FRONT AND BACK ELEMENT
    cout<<"front ele : "<<d.front()<<"\nback ele : "<<d.back();

    //TO CHECK THAT DEQUE IS EMPTY OR NOT
    cout<<"empty or not"<<d.empty()<<endl; // if empty return 1 else false

    //ERASING ELEMENTS
    cout<<"before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);  //giving range
    cout<<"after erase"<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;



}