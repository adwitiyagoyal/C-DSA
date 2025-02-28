//DOUBT
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

char lowercase(char ch){
    if(ch>='A'&&ch<='Z'){
        ch=ch +'a'-'A';
        return ch;
    }
    else
    return ch;
}

bool validcharacter(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='z')||(ch>='0'&&ch<='9'))
    return 1;
    else
    return 0;
}

bool checkPalindrome(string s)
{
    string temp ="";
    // VALID CAHRACTER
    for(int i=0;i<s.size();i++){
        char c =s[i];
        if(validcharacter(c)){
            temp.push_back(c);
        }
    }
    
    //LOWER CASE
    for(int i=0;i<temp.size();i++){
        temp[i]=lowercase(temp[i]);
    }
    
    int st=0,e=temp.size()-1;
    while(st<e){
        if(temp[st]!=temp[e]){
            return false;
        }
        st++;
        e--;
    }
    return true;
}

int main(){
    char str[178]="ABC123 Ab 321c ba";

    cout<<checkPalindrome(str);
}