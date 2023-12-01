//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbjZzeGdhNmNkR2dTTm9HdHpqZDZDd29ZeVh3QXxBQ3Jtc0tubk9uLWctSDhWc3JmWER3TDBQTWlRZUZ4c3NlM1owZWNfb01EQ1k1ME43ajYzUmpxQ2lqV0hvY1o3V0RtSmtQR0VLUVJxNm9oTkxyY21qZklnYzJ6ODdSMmJYT1kzWXNIN184OEMzWkJ5WGFBc05aRQ&q=https%3A%2F%2Fbit.ly%2F3dm6bdZ&v=oVa8DfUDKTw

#include<iostream>
using namespace std;

int dup(int ar[],int n){

    int sum=0;

    for(int i=0;i<n;i++){

        sum=sum+ar[i];

    }

    int s;
    s=(n*(n-1))/2;

    return sum-s;

}
//alternate
int alt(int ar[],int n){

    int ans=0,s=0;
    for(int i=0;i<n;i++){

        ans=ans^ar[i];
        //s=s^i;
        ans=ans^i;


    }
    return (ans);
    
}

int main(){

    int ar[8]={1,2,3,4,5,4,7,6};

    cout<<alt(ar,8)<<"\n";
    cout<<dup(ar,8);
}