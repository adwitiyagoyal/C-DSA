bool findRedundantBrackets(string &s)
{
    // Write your code here.

    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' ||ch == '/' ||ch == '*'){
            st.push(ch);
        }
        if(ch == ')'){
            bool isredundant =true;
            while(st.top() != '('){
                if( st.top() == '+' || st.top() == '-' ||st.top() == '/' ||st.top() == '*'){
                    isredundant = false;
                }
                st.pop();
            }
            if(isredundant){
                return true;
            }
            st.pop();
        }

    }
    return false;
}
