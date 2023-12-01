#include<iostream>
using namespace std;

//pass by refference

void update(int ar[],int size){


    ar[0]=12;  //here adress has been sent not copy
    ar[1]=18;

}

int main(){

    int ar[3]={1,2,3};

    cout<<"before updating : "<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<endl;  //before updating

update(ar,3);

    cout<<"after updating : "<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<endl;  //after updating

}