#include<iostream>
#include<list>
//IN LIST WE CANNOT GO DIRECT TO ANY LOCATION OF LIST LIKE ARRAY ,VE3CTOR THROUGH [at] function 
using namespace std;

int main(){
    list<int> l;
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    //COPY LIST
    list<int>copy(l);
    for(int i:copy){
        cout<<i<<" ";
    }cout<<endl;

    list<int> ne(5,100);
    for(int i:ne){
        cout<<i<<" ";
    }cout<<endl;


    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.pop_front();
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size is  "<<l.size();
}