#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //creating 2D array[m][n]
    int m,n;
    cin>>m>>n;

    int **arr=new int*[n];

    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    //CREATED 2D ARRAY
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing or deleting of 2d array from heap memory
    for(int i=0;i<m;i++){
        delete []arr[i];
    }
    delete []arr;
    //memory is free

    return 0;
}
