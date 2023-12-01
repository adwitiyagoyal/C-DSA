//
//space cpmplexity - O(n)
#include<iostream>
#include<bits\stdc++.h>
using namespace std;

void solve(vector<int> digits,vector<vector<int>> &ans,int index){
    if(index>=digits.size()){
        ans.push_back(digits);
        return ;
    }

    for(int i=index;i<digits.size();i++){
        swap(digits[index],digits[i]);
        solve(digits,ans,index+1);
        //BACKTRACKING
        swap(digits[index],digits[i]);
    }

}
vector<vector<int>> permutation(vector<int> digits){

    vector<vector<int>> ans;
    int index=0;
    solve(digits,ans,index);
    return ans;
}
int main(int argc, char const *argv[])
{
    vector<int> digits{4,8,5,9};

    vector<vector<int>> ans=permutation(digits);

    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<"]"<<endl;
    }

    return 0;
}


