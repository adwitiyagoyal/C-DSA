#include<iostream>
#include<climits>
using namespace std;

double median(int *ar1,int n1,int *ar2,int n2){
    if(n1>n2)
        return (ar2,n2,ar1,n1);
    int s=0;
    int e=n1;
    int n=n1+n2;
    int left=(n1+n2+1)>>1;
    while(s<=e){
        int mid1 = s+((e-s)>>2);
        int mid2 = left-mid1;
        int l1=INT_MIN;
        int l2=INT_MIN;
        int r1=INT_MAX;
        int r2=INT_MAX;

        if(mid1<n1)
            r1=ar1[mid1];
        if(mid2<n2)
            r2=ar2[mid2];
        if(mid1-1>=0)
            l1=ar1[mid1-1];
        if(mid2-1>=0)
            l2=ar2[mid2-1];
        
        if(l1<=r1&&l2<=r2){
            if(n&1)
                return max(l1,l2);
            else
                return ((double)(max(l1,l2)+min(r1,r2)))/2.0;
        }
        if(l1>r1){
            e=mid1-1;
        }
        if(l2>r2){
            s=mid1+1;
        }
    }
    return 0;
}






int main(int argc, char const *argv[])
{
    int ar1[4]={1,4,6,7};
    int ar2[4]={2,3,5,8};
    cout<<median(ar1,4,ar2,4);
    return 0;
}
