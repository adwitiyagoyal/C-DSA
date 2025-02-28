#include<iostream>

using namespace std;
int k=0;
bool checking_sortedANDrotated(int ar[],int n){
    for(int i=0;i<n;i++){
        if(ar[(i+1)%n]<ar[i]){
          k++;
        }
    }
    if(k<=1)    // less than for array like{1,1,1,1}
    return true;
    
    return false;
}
int main(){
   int ar[6]={7,1,2,3,5,6};
   cout<<checking_sortedANDrotated(ar,6);

}