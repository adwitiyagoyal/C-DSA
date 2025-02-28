//time complexity - O(2^n)
//space complexity - O(n)
#include<bits\stdc++.h>
using namespace std;

void solve(vector<vector<int>> &ans,vector<int> nums,vector<int> output,int index){

    //base case
    if(index>=nums.size()){
        //if want to exclude empty set use /  if(output.size()!=0)
        ans.push_back(output);
        return;
    }

    //EXCLUDE
    solve(ans,nums,output,index+1);

    //INCLUDE
    int element=nums[index];
    output.push_back(element);
    solve(ans,nums,output,index+1);

}

vector<vector<int>> subset(vector<int> nums){
    vector<vector<int>> ans;
    int index=0;
    vector<int> output;
    solve(ans,nums,output,index);
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    vector<vector<int>> ans=subset(nums);
    for (int i = 0; i < ans.size(); i++) {
        cout<<"[ ";
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout <<"]"<< endl;
    }
return 0;
}

