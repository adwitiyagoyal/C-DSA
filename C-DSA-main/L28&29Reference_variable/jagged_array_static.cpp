#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int row[]={1,2,3};
    int row1[]={1,2,3,4};
    int row2[]={1,2,3,4,5};
    int row3[]={1,2,3,4,5,6};

    int *jagged[]={row,row1,row2,row3};
    int size[]={3,4,5,6};

    for(int i=0;i<4;i++){

        int *ptr = jagged[i];
        for(int j=0;j<size[i];j++){
            cout<<*(ptr+j)<<" - ";
        }
        cout<<endl;
    }
    return 0;
}
