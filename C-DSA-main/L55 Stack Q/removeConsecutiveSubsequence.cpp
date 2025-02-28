//from colege wallah java stack 2
//https://www.youtube.com/watch?v=B5RbUqdPK80

#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

//1 2 2 3 10 10 10 4 4 4 5 7 7 - input
//1 3 5 - output
vector<int> removeConsecutiveSubsequence(vector<int> arr){
    vector<int> res;
    stack<int> s;
    int n = arr.size();
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == s.top()){
            if((i+1)<n && arr[i+1] == arr[i]){
                //Eat 5star
            }
            else{
                s.pop();
            }
        }
        s.push(arr[i]);
    }
    for(int i=0; i<s.size(); i++){
        res[s.size()-1-i] = s.top();
        s.pop();
    }
    retrun res;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
