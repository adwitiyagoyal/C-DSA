#include<iostream>
#include<string.h>

using namespace std;

int getlength(char ch[]){
    int length = 0,i=0;

    while(ch[i]!='\0'){
        length++;
        i++;
    }
    return length;
}

void reverse(char ch[]){
    // int x = getlength(ch);
    // for(int i=0;i<(x/2);i++){
    //     swap(ch[i],ch[x-1-i]);
    // }

    int s=0,e=getlength(ch)-1;
    while(s<e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}

int main(){

    char ch[20];

    cout<<"enter something "<<endl;
    cin>>ch;
    reverse(ch);
    
    cout<<"what is something  "<<ch<<" "<<getlength(ch)<<endl;

    //IN bUILT FUNCTION for character array
    char s1[]="sky is blue ";
    char s2[]="some thing is blue";
    
    //copy char array strcpy(destination string ,source str)
    strcpy(s1,s2);
    cout<<"copied str : "<<s1<<endl;

    //compare strcmp(s1,s2)  equal->1 not equal ->0
    cout<<strcmp(s1,s2)<<endl;

    //length of array
    cout<<strlen(s1);
    

}