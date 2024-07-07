#include<iostream>
using namespace std;

int getsum(int ar[],int n){  //if we write *ar in place of ar[] it is same
    cout<<"size -> "<<sizeof(ar)<<endl;  //give SIZE OF POINTER      //as the pointer is pass into the function not tha array
    int sum = 0;
    for(int i=0;i<n;i++){
        sum=sum+*(ar+i);  //ar[i] can be written
    }
    return sum;
}

int getsum1(int *ar,int n){  //if we write *ar in place of ar[] it is same
    cout<<"size -> "<<sizeof(ar)<<endl;        //as the pointer is pass into the function not tha array
    int sum = 0;
    for(int i=0;i<n;i++){
        sum=sum+i[ar];
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int ar[5]={1,2,3,4,5};
    cout<<getsum(ar+3,2)<<endl;   //taking sum after ar[2] size become 2
    // cout<<getsum1(ar,5)<<endl;
    return 0;
}





