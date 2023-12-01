#include<iostream>
using namespace std;


void words_from_sentence(string s){
    string word ="";
    for(auto i :s){  //we can also use char
        if(i==' '){   // but auto automatically detects and assigns a data type to the variable with which it is used
            cout<<word<<endl;
            word = "";
        }
        else{
            word = word + i;
        }
    }
    cout<<word<<endl;

}

int main(){
    string s ;
    getline(cin,s); 
    words_from_sentence(s);
    s="";
    getline(cin,s,'@'); // it will not read after we type @addindex
    words_from_sentence(s);


}