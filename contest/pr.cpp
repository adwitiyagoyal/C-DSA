#include<iostream>
#include<climits>
using namespace std;

    int minR(vector<vector<int>>& points, int w) {
        int n = points.size();
        sort(points.begin(),points.end());
        int cnt = 0;
        
        for(int i=0;i<n;i++){
            int s = points[i][0];
            int j = i;
            
            while(j<n && points[j][0] - points[i][0] <= w){
                j++;
                cnt++;
            }
            i=j;
        }
        return cnt;
    }

    int main(int argc, char const *argv[])
    {

        cout<<minR({[2,1],[1,0],[1,4],[1,8],[3,5],[4,6]},1);
        return 0;
    }
    
