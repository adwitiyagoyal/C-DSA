#include<iostream>
#include<stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<char> st;

    string s;
    cout<<"Enter the string "<<endl;
    cin>>s;

    for(int i = 0; i < s.length(); i++){
        st.push(s[i]);
    }

    string ans = "";

    for(int i = 0; !st.empty(); i++){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout<< ans;
    return 0;
}
