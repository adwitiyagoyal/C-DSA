//Time complexity -> O(n^2)
//space complexity -> O(n)
#include<iostream>
using namespace std;

void bubblesort(int *ar,int n){

    if(n==1)
    return ;

    for(int i=0;i<(n-1);i++){
        if(ar[i]>ar[i+1])
            swap(ar[i],ar[i+1]);
    }

    bubblesort(ar,n-1);

}

int main(int argc, char const *argv[])
{
    int ar[6]={1,6,3,8,2,0};
    bubblesort(ar,6);
    cout<<"{";
    for(int i=0;i<6;i++){
        cout<<ar[i]<<" ";
    }
    cout<<"}";
    return 0;
}
