#include<iostream>
using namespace std;


int maxi(int ar[],int n){

    int max =ar[0];
    int s = 0;
    for(int i=0;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
            s = i;
        }
    }
    return s;
}

char maxocc(string temp){
    int occ[26]={0};
    int num=0;
    int n = temp.size();
    for(int i=0;i<n;i++){
        //FOR CAPITAL LETTER 
        if(temp[i]>='A'&&temp[i]<='Z'){
        num = temp[i]-'A';
        occ[num]++;
        }
        //FOR SMALL LETTER
        else{
        num = temp[i]-'a';
        occ[num]++;
        }
    }

    char oc = maxi(occ,26) + 'a';
    return oc;

}

int main(int argc, char const *argv[])
{
    string s;
    cout<<"enter the string : ";
    cin>>s;
    cout<<maxocc(s);
    return 0;
}
