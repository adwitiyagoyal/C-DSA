#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int ARR[3]={1,2,3};
   char ch[6]="ancde";
   cout<<ARR<<endl; //address
   cout<<ch<<endl;  //the ch array itself  //it stops where it finds null character
   char *c=&ch[0];
   cout<<c<<endl;  //it stops where it finds null character
   cout<<c[2]<<endl;
   cout<<*c<<endl;
   cout<<*c+1<<endl;
   cout<<*(c+1)<<endl;
   cout<<&c<<endl;

   //the ch without null pointer
   char m='a';
   char *p6=&m;
   cout<<p6<<endl;
   cout<<*p6<<endl; // it will print m then it will print another charater till it find nul chara

}

