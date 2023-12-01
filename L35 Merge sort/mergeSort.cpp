//Time complexity -> O(n logn)
//space complexity -> O(n)
 #include<bits\stdc++.h>
using namespace std;

void merge(vector<int>&nums,int s,int e){
        int mid=s+(e-s)/2;
        int l1=mid-s+1;
        int l2=e-mid;

        int *first =new int[l1];
        int *second=new int[l2];

        int k=s;

        for(int i=0;i<l1;i++){
            first[i]=nums[k++];
        }
        for(int i=0;i<l2;i++){
            second[i]=nums[k++];
        }

        k=s;

        int i=0,j=0;

        while(i<l1&&j<l2){
            if(first[i]<=second[j]){
                nums[k++]=first[i++];
            }
            else{
                nums[k++]=second[j++];
            }
        }

        while(i<l1){
            nums[k++]=first[i++];
        }
        while(j<l2){
             nums[k++]=second[j++];
        }

       //  return nums;
    }
    void mergesort(vector<int>&nums,int s,int e){
         if(s>=e)
            return;
        
        int mid = s+(e-s)/2;

        mergesort(nums,s,mid);
        mergesort(nums,mid+1,e);

        merge(nums,s,e);
    }

    int main(int argc, char const *argv[])
    {
        vector<int> v;
        v.push_back(5);
        v.push_back(1);
        v.push_back(1);
        v.push_back(2);
        v.push_back(0);
        mergesort(v,0,v.size()-1);
       // merge(v,0,v.size()-1);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        return 0;
    }
    