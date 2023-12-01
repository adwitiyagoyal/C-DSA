#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row;
    cout<<"enter thw row"<<endl;
    cin>>row;
    //initializing the no of col
    int **arr =new int*[row];
    int size[row];
    for(int i=0;i<row;i++){
        cout<<"enter the coloum of the "<<i<<"th row \n";
        cin>>size[i];

        //for initializing rows
        *(arr+i)=new int[size[i]];
        
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<size[i];j++){
            cout<<"enter the ["<<i<<"]"<<"["<<j<<"]"<<" element\n";
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<size[i];j++){
            //cout<<"enter the ["<<i<<"]"<<"["<<j<<"]"<<" element\n";
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
