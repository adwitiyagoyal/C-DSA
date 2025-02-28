#include<iostream>
using namespace std;

bool search(int ar[],int size,int x){

    for(int i=0;i<size;i++){

        if((ar[i])==x){
            return 1;
        }
    }
    return 0;
}
int main(){

    int ar[10] = {5,7,-2,4,6,8,0,5,5,8};

    if(search(ar,10,1))
        cout<<"1 is present";

    else 
        cout<<"1 is absent";



}