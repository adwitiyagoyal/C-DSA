#include<iostream>
//#include<vector>

using namespace std;

void merging(int nums1[],int m,int nums2[],int n,int ans[]){

    int i=0,j=0,k=0;
        
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                ans[k] = nums1[i];
                i++;        //i=4 j=3 k=7
                
            }
            else{
                ans[k]=nums2[j];
                j++;
            }
            k++;
            
        }
        while(i<m){
            ans[k++]=nums1[i++];
            
            
        }
        while(j<n){
            ans[k++]=nums2[j++];
            

        }

}

int main()
{
    int ar1[5]={1,3,5,7,13};
    int ar2[4]={6,8,10,13};
    int ans[9]={0};
    merging(ar1,5,ar2,5,ans);
    cout<<endl;
    for(int i=0;i<9;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
