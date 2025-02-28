#include<iostream>
#include<stack>
using namespace std;

bool isMatch(char ch, char top){
    if(ch == ')' && top == '('){
        return true;
    }
    else  if(ch == '}' && top == '{'){
        return true;
    }
    else  if(ch == ']' && top == '['){
        return true;
    }
    return false;
}

bool validParenthesis(string parenthesis){
    stack<char> s;

    for(int i=0;i<parenthesis.length();i++){
        char val = parenthesis[i];
        char top;
        if(!s.empty()){
            top = s.top();
        }
        if(val == '{' || val == '(' || val == '['){
            s.push(val);
        }
        else if(s.empty()){
            s.push(val);
        }
        else{
            if(isMatch(val, top)){
                s.pop();
            }
        }
    }
    if(s.empty()){
        return true;
    }
    return false;
    
}



int main(int argc, char const *argv[])
{
    string s = "[]{()({[]]})}{{}}";
    if(validParenthesis(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
      
    return 0;
}

