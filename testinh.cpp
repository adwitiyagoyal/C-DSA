#include <iostream>
#include<vector>
using namespace std;
 bool uniqueOccurrences(vector<int>& arr) {
       // sort(arr.begin(),arr.end());
       
        vector<int> store={0};
        
        int k=0;
        for(int i=0;i<(arr.size()-1);i++){
            if(arr[i+1]==arr[i]){
                store[k] ++;
            }
            else{k++;}
        }
        cout<<store.size()<<endl;
        for(int i=0;i<store.size();i++){
            for(int j=0;j<store.size();j++){
                if(store[i]==store[j]&&store[i]!=0 &&store[j]!=0){
                    return false;
                }
            }
        }
        return true;
    }
int main() {

    vector<int> ar{1,2,2,3,3};
    cout<<uniqueOccurrences(ar);

    return 0;
}