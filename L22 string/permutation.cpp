#include<iostream>
using namespace std;
bool equal(int ar1[26],int ar2[26]){
    for(int i=0;i<26;i++){
        if(ar1[i]!=ar2[i]){
            return 0;
        }
    }
    return 1;
}

bool permutation(string s1,string s2){
    int n1 = s1.length();
    int n2 = s2.length();
    int cnt1[26] = {0};
    int cnt2[26]={0};
    for(int i=0;i<n1;i++){
        int index = s1[i] - 'a';
        cnt1[index]++;
    } 
    //first s1 digits
    for(int i=0;i<n1;i++){
        int index = s2[i] - 'a';
        cnt2[index]++;
    }
    if(equal(cnt1,cnt2)){
        return true;
    }

    for(int i=n1;i<n2;i++){
        
        
      //  if((i-n1+1)>=0){
            int index2 = s2[i-n1]-'a';
            cnt2[index2]--;
      //  } 

        int  index = s2[i]-'a';
        cnt2[index]++;

       if(equal(cnt1,cnt2)){
        return true;
    }

        
          
        
    }
    return false;
}

int main(){
    string s1 = "bcd";
    string s2 ="mnvvjfjfbcd";
    cout<<permutation(s1,s2);
}