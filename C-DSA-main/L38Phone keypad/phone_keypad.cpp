//Time complexity - O(4^n)
//space complexity - O(n)

#include<iostream>
#include<bits\stdc++.h>
using namespace std;

void solve(string digits,vector<string> &ans,string output,string mapp[],int index){
    if(index>=digits.length()){
        ans.push_back(output);
        return ;
    }

    int element = digits[index] - '0';
    string value = mapp[element];
    for(int i=0;i<value.size();i++){
        output.push_back(value[i]);
        solve(digits,ans,output,mapp,index+1);
        output.pop_back();
    }
}

vector<string> alpha(string digits){
    vector<string> ans;
    string output = "";
    string mapp[9] = {"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(digits.length()==0){
        return ans;
    }
    int index=0;
    solve(digits,ans,output,mapp,index);
    return ans;
}

int main(int argc, char const *argv[])
{
    string digits = "457";
    vector<string> ans = alpha(digits);

    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].length();j++){
            cout<<ans[i][j];
        }
        cout<<"] ";
    }
    return 0;
}



