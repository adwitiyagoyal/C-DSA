#include<iostream>
using namespace std;

string fill(string s){
    //string temp = "";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s.pop_back();
            s.push_back('@');
            s.push_back('4');
            s.push_back('0');

        }
        
    }
    return s;
}
int main(){
    string s="";
    getline(cin,s);
    cout<<fill(s);
}