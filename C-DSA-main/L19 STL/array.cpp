#include<iostream>
#include<array>

using namespace std;
int main(){
    int basic[3]={1,2,3};  //basic representation

    array<int,4> a ={1,2,3,4};  //stl rep

    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;   //basic
    }

    for(int i=0;i<size;i++){
        cout<<a.at(i)<<" ";
    }

    cout<<"\n";
    for(int i:a){            //stl way
        cout<<i<<" ";
    }

    cout<<"\n";
    cout<<"first element is : "<<a.front()<<endl;
    cout<<" element is : "<<a.back()<<endl;

}