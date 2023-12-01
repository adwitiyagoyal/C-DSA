#include<iostream>

using namespace std;

int reverse_array(int ar[],int size){

    int rev[size];

    for(int i=0;i<size;i++){

        rev[i]=ar[size-1-i];

    }

    for(int i=0;i<size;i++){

        cout<<rev[i]<<" ";
    }
    return rev[size];

}

//also we can use swap liberary function

void revarray(int ar[],int size){

    int start=0,end=size-1;

    while(start<end){

        swap(ar[start],ar[end]);

        start++;
        end--;

    }
     for(int i=0;i<size;i++){

        cout<<ar[i]<<" ";
    }

}

int main(){

    int ar[4]={1,2,3,4};

    reverse_array(ar,4);

    cout<<endl;

    revarray(ar,4);

    return 0;
}

