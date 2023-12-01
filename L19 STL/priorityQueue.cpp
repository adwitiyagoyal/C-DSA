#include<iostream>
#include<queue>

using namespace std;

int main(){
    //MAX HEAP -> PRIORITISE MAX ELEMENT 
    priority_queue<int> maxi;

    //MIN HEAP -> PRIORITISE MIN ELEMENT 
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    cout<<"size is : "<<maxi.size()<<endl;

    int n =maxi.size();

    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop(); // we cannot jump directly into any element ,
    }                //we have to remove element by popping 
    cout<<endl;

    mini.push(3);
    mini.push(5);
    mini.push(6);
    mini.push(8);
    mini.push(1);
    int x=mini.size();
    for(int i=0;i<x;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"is empty  "<<mini.empty();
}