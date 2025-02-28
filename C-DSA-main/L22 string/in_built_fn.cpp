#include<iostream>
using namespace std;

int main(){

    string s0 ("initial character");
    string s1 ;  //("")
    string s2 (s0);     //copy of s0
    string s3 (s0,8,3); //in s0 from (8+1)th char 3 char
    string s4 ("a character sequence");
    string s5 ("another character",12);
    string s6a (6,'x') ;//6 times x
    string s6b (8,49) ; // 49 is ASCII value
    string s7 (s0.begin(),s0.begin()+7);

    cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3;
    cout << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6a: " << s6a;
    cout << "\ns6b: " << s6b <<  '\n';
    // addition of string 
    cout<<"\ns7: " << (s7 + s0) ;
}