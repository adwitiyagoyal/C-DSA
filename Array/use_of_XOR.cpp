#include<iostream>
using namespace std;

// for question
//  https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbTNBQVluUDVSUXNsa2lEeHFkaFp4OXhIUWNVd3xBQ3Jtc0treFlLOHdQUXBvaDV3YXlrZzVmNnM5RmdCTlpXbFd5QUtlLXl0MU9XcmEwUU5OSkJLazg4VUVmcWxSemIxeTBWNWJ6bU4ybzdiNHpvaWhRUW5sblItRzZzVjg5TGkwdUZlWkV2aVJ5cEg3WDBXaHU4NA&q=https%3A%2F%2Fbit.ly%2F3y01Zdu&v=oVa8DfUDKTw

int unique(int ar[],int n){

   int ans=0;

   for(int i=0;i<n;i++){           
                                  //concept
      ans=ans ^ ar[i];            //n^n=0  n^0=n

   }
   return ans;
}

int main(){

    int ar[]={2,3,4,2,3,4,5};
    cout<<unique(ar,7);
    

}