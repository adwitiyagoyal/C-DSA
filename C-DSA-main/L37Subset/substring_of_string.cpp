//time complexity - O(2^n)
//space complexity - O(n)

#include<bits\stdc++.h>
using namespace std;

void solve(vector<string> &ans,string output,string s,int index){
    //BASE CASE
    if(index>=s.size()){
        ans.push_back(output);
        return;
    }

    //EXCLUDE
    solve(ans,output,s,index+1);

    //INCLUDE
    char element=s[index];
    output.push_back(element);
    solve(ans,output,s,index+1);

}

vector<string> substring(string s){
    vector<string> ans;
    string output="";
    int index=0;
    solve(ans,output,s,index);
    return ans;
}

int main(int argc, char const *argv[])
{
    string s="GOYAL";
    vector<string> ans=substring(s);
    for(int i=0;i<ans.size();i++){
        cout<<"[ ";
        for(int j=0;j<ans[i].length();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }

    return 0;
}







