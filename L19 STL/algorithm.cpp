#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h> //this include all libereary like vector,array ,string,algo

using namespace std;

int main(){
    vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //to CHECK WHETHER ELEMENT IS PRESENT OR NOT
    cout<<"finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"finding 3-> "<<binary_search(v.begin(),v.end(),3)<<endl;

   cout<<"lower_bound : "<<lower_bound(v.begin(),v.end(),1)-v.begin()<<endl;
   cout<<"upper_bound : "<<upper_bound(v.begin(),v.end(),1)-v.begin()<<endl;

   //MAX AND MIN
   int a=3,b=5;
   cout<<"max of a and b ->"<<max(a,b)<<endl;
   cout<<"min of a and b ->"<<min(a,b)<<endl;

   swap(a,b);
   cout<<"a-> "<<a<<endl<<"b-> "<<b<<endl;

  //REVERSING STRING
   string s = "abcde";
   cout<<"string is -> "<<s<<endl;
   reverse(s.begin()+2,s.end());
   cout<<"reversed string is -> "<<s<<endl;

   //ROTATION OF VECTOR rotate(initial,final,end value of vector);
   rotate(v.begin(),v.begin()+1,v.end());

   for(int i:v){
    cout<<i<<" ";
   }cout<<"\n";

   rotate(v.begin(),v.begin()+2,v.end());

   for(int i:v){
    cout<<i<<" ";
   }cout<<"\n";

   //SORT - WORKS ON PRINCIPLE OF INTRO SORT
   sort(v.begin(),v.end());
   cout<<"after sort -> ";
   for(int i:v){
    cout<<i<<" ";
   }cout<<"\n";



   

    

}