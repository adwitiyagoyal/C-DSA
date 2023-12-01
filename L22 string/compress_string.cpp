#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int compress(string s){
    
    int n= s.size();
    int i=0;
    int index =0;
    while(i<n){

       int j=i+1;
        while(j<n && s[i]==s[j]){
            j++;
        }

        int count = j-i;
        s[index++]=s[i];

        if(count>1){
            string cnt = to_string(count);
            for(auto ch:cnt){
                s[index++]=ch;
            }
        }
        i=j;
        


    }
     s.pop_back();
    cout<<s<<endl;
   
        return index;

}

int main()
{
    string s ="aabbb";
    cout<<compress(s);
}
