#include<iostream>
using namespace std;


// even-> 1
// odd -> 0
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cout<< "enter the number :  ";
    cin>> num;
    if(isEven(num)){
        cout<<"number is even\n";
    }

    else 
    cout<<"number is odd \n";

    return 0;
}