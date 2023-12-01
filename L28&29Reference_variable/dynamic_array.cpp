#include<iostream>
using namespace std;

int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    //variable size array
    int *arr=new int[n];  //*arr is in static memory ..new int[n] is heap memory
                               // size is 8(*arr) +n*4(new int[n])
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<"\n";
    }
    cout<<getsum(arr,n);

    while(1){
        int x= 5;  //it automatically gets deleted after every cycle
    }

    while(1){
        int *ptr=new int;   // *ptr deletes after one cycle and again created
    }                       // but new int makes new mmeory in loop after every cycle as previous was not get deleted
    return 0;      //lead to overflow

    // we cam delete memory in dynamic memory by using delete key word
    
    while(1){
        int*pt =new int;
        delete pt;
    }
    //for deleting array 
    int *ar =new int[];
     delete []ar;
}
