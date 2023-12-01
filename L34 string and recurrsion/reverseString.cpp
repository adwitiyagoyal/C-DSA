//Time complexity -> O(n)
//space complexity -> O(n)
#include<iostream>
using namespace std;

string reverse(string str,int s,int e){
    if(s>e)
    return str;

    swap(str[s],str[e]);
    s++;
    e--;
    return reverse(str,s,e);
}
//only works for a word before space
void rev(string &str,int s,int e){
    if(s>e)
    return ;

    swap(str[s],str[e]);
    s++;
    e--;
    rev(str,s,e);
}

int main(int argc, char const *argv[])
{
    string str ="adwitiya goyal";
    cout<<reverse(str,0,str.length()-1)<<endl;  //this does not change the oriinal string
    rev(str,0,str.length()-1);  //pass by refference
    cout<<str;
    return 0;
}
