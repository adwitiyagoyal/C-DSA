//Time complexity -> O(logbase10(n))
//space complexity -> O(logbase10(n))

#include<iostream>
using namespace std;
void say(int n,string str[]){
    //base case
    if(n==0){
        return;
    }

    //processing
    int i=n%10;
    n=n/10;
    

    //
    say(n,str);
    cout<<str[i]<<" ";
}
int main(int argc, char const *argv[])
{
    int n;
    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    say(n,str);
    return 0;
}
