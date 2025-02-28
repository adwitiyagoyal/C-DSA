#include<iostream>
#include<climits>
using namespace std;

// max function defining
void max(int ar[],int n){
   int x = INT_MIN;

   for(int i=1;i<n;i++){

      if(x<ar[i]){      // also use max(a,b) lib fuction

         x=ar[i];

      }
   }

   cout<<"max entry is : "<<x<<endl;

}  

//min function defining

void min(int ar[],int n){
   int x = INT_MAX;

   for(int i=1;i<n;i++){

      if(x>ar[i]){

         x=ar[i];

      }
   }

   cout<<"min entry is : "<<x<<endl;
   
}

int main(){

   int size;
   cout<< "enter the size of array : ";
   cin>>size;
   int ar[size];

   for(int i=0;i<size;i++){

      cout<<"enter the "<<i<<" element of array\n";
      cin>>ar[i];

   }

   max(ar,size);
   min(ar,size);
   return 0;
}
 
 