#include<iostream>
using namespace std;

int getlength(char ch[]){
    int length = 0,i=0;

    while(ch[i]!='\0'){
        length++;
        i++;
    }
    return length;
}

void rev(char str[]){


    int s=0,e=getlength(str)-1;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}


void reverse(char str[]){
    char temp[] = "";
    int j=0;
    for(int i=0;i!='\0';i++){
        temp[j]= str[i];
        if(str[i]=' '){
            int count=j;
            rev(temp);
            cout<<temp;
            for(int x=0;x<=j;x++){
                temp[x]='\0';
            }
        }
        j++;
    }
}

int main(){

}