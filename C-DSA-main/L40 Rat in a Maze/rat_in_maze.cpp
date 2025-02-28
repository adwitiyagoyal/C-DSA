//TIME Complexity - O(2^((n)^2))
//SPACE complexity - O(n^2)
#include<iostream>
#include<bits\stdc++.h>
using namespace std;
bool ispossible(vector<vector<int>> &maze,vector<vector<int>> &visited,int i,int j){
    int n=maze.size();
    if(i>=0 && i<n && j>=0 && j<n && visited[i][j]==0 && maze[i][j]==1){
        return true;
    }
    return false;
}
void solve(vector<string> &ans,string output,vector<vector<int>> &visited,vector<vector<int>> maze,int i,int j){
    //BASE CASE
    int n=maze.size();
    if(i==n-1 && j==n-1){
        ans.push_back(output);
        return ;
    }

    visited[i][j]=1;
     // GOING RIGHT
    if(ispossible(maze,visited,i,j+1)){
        output.push_back('R');
        solve(ans,output,visited,maze,i,j+1);
        output.pop_back();
    }

    // GOING DOWN
    if(ispossible(maze,visited,i+1,j)){
        output.push_back('D');
        solve(ans,output,visited,maze,i+1,j);
        output.pop_back();
    }

    // GOING UP
    if(ispossible(maze,visited,i-1,j)){
        output.push_back('U');
        solve(ans,output,visited,maze,i-1,j);
        output.pop_back();
    }

    // GOING LEFT
    if(ispossible(maze,visited,i,j-1)){
        output.push_back('L');
        solve(ans,output,visited,maze,i,j-1);
        output.pop_back();
    }
    visited[i][j]=0;



}

vector<string> ways(vector<vector<int>> maze){
    vector<string> ans;
    int index=0;
    if(maze[0][0]==0){
        return ans;
    }
    int i=0,j=0;
    string output="";
    vector<vector<int>> visited=maze;
    for(int i=0;i<maze.size();i++){
        for(int j=0;j<maze.size();j++){
            visited[i][j]=0;
        }
    }
    solve(ans,output,visited,maze,i,j);
    return ans;

}
int main(int argc, char const *argv[])
{
    vector<vector<int>> maze {{1, 0, 0, 0},{1, 1, 0, 1},{1, 1, 0, 0},{1, 1, 1, 1}};

vector<string> ans=ways(maze);
//cout<<ans.size();
for(int i=0;i<ans.size();i++){
    cout<<"[";
    for(int j=0;j<ans[i].length();j++){
        cout<<ans[i][j];
    }
    cout<<"]"<<endl;
}

    return 0;
}
