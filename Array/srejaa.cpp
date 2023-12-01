#include<iostream>
#include<climits>
using namespace std;

void ans(int n,int ar[]){
int s=0,e=n-1;
int sre=0;
int dema=0;
int i=0;
while(s<=e){
    
    if(ar[e]<ar[s]){
        s++;
        if(i%2==0){
        sre=sre+ar[s];
        }
        else{
            dema=dema+ar[e];
        }
    }

    else{
        e--;
        if(i%2==0){
        sre=sre+ar[s];
        }
        else{
            dema=dema+ar[e];
        }


    }

    i++;

}
cout<<sre<<"   "<<dema;

}


int main(){
    int ar[4]={4,1,2,10};
    ans(4,ar);
}
