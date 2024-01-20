#include<iostream>
#include<deque>
using namespace std;

int sum(int arr[n],int n,int k){
    deque<int> maxi;
    deque<int> mini;
    for(int i=0; i<k; i++){
        //max element in front
        while(!maxi.empty() && arr[i] > arr[maxi.front()]){
            maxi.pop_front();
        }
        while(!mini.empty() && arr[i] < arr[mini.front()]){
            mini.pop_front();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;
    ans = arr[maxi.front()] +arr[mini.front()];

    for(int i=k; i<n; i++){
        if(!maxi.empty() && i-maxi.front() >= k){
            maxi.pop_front();
        }
         while(!maxi.empty() && arr[i] > arr[maxi.front()]){
            maxi.pop_front();
        }
        maxi.push_back(i);

        if( !mini.empty() && i-mini.front() >= k){
            mini.pop_front();
        }
        while(!mini.empty() && arr[i] < arr[mini.front()]){
            mini.pop_front();
        }
        mini.push_back(i);

        ans += arr[maxi.front()] +arr[mini.front()];
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
