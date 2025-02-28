#include<iostream>
using namespace std;

int main(){
    int ar[3]={1,5,9};
    cout<<"address of first slot of array is : "<<ar<<endl;
    cout<<"address of first slot of array is : "<<&ar[0]<<endl;
    cout<<"address of second slot of array is : "<<ar+1<<endl;
    cout<<"address of second slot of array is : "<<&ar[1]<<endl;


    //ar[i] = *(ar+i);
    //i[ar]=*(i+ar);
    cout<<"element at 0th index : "<<*ar<<endl;
    cout<<"element at 0th index plus 1: "<<*ar+1<<endl;
    cout<<"element at 0th index plus 1 : "<<(*ar)+1<<endl;
    cout<<"element at 1th index : "<<*(ar+1)<<endl;
    cout<<"element at 2th index : "<<*(2+ar)<<"  "<<ar[2]<<"  "<<2[ar]<<endl;

    //PLAYING WITH SIZE
    int temp[5]={1,2,3,4,5};
    cout<<"size of array : "<<sizeof(temp)<<endl; //20
    //8->
    cout<<"size of place where address of array[0] is stored : "<<sizeof(&temp)<<endl;//8
    
    cout<<"size of value array[0] : "<<sizeof(*temp)<<endl; //4

    int *ptr = &temp[0];
    cout<<"size of array : "<<sizeof(temp[0])<<endl; //4
     cout<<"size of array : "<<sizeof(ptr)<<endl; //8
      cout<<"size of array : "<<sizeof(*ptr)<<endl; //4
       cout<<"size of array : "<<sizeof(&ptr)<<endl; //8

       int arr[10];
      // arr=arr+1;  //error as we cannot to do change in symbol table
      int *ptr3=&ar[0];
      cout<<"before : "<<ptr3<<endl;
      ptr=ptr+1; //we can do these thing with pointer and this will correspond to the address ogf the next integer 
      cout<<"after : "<<ptr3<<endl;

}