class Solution {
private:
     vector<int> nextLargestElement(vector<int> arr, int n){
        stack<int> s;
        s.push(n);
        
        vector<int> ans(n);

        for(int i=n-1;i>=0;i--){
            while(s.top() != n && arr[i] <= arr[s.top()]){
                s.pop();
            }

            ans[i] = s.top();
            
            s.push(i);
        }
        return ans;
    }

     vector<int> previousLargestElement(vector<int> arr, int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            while(s.top() != -1 && arr[i] <= arr[s.top()]){
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

     int largestRectangleArea(vector<int>& heights) {
        int n= heights.size();
        vector<int> next;
        next = nextLargestElement(heights,n);
        vector<int> prev;
        prev = previousLargestElement(heights,n);

        int area = INT_MIN;

        for(int i=0;i<n;i++){
            int l = heights[i];
            int b = next[i] - prev[i] - 1;
            
            int newarea = l*b; 
            area = max(area,newarea);
        }
        return area;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int cols = matrix[0].size();
        
        vector<vector<int>> mat(row,vector<int>(cols,0));

        for(int i=0;i<row;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j] == '1'){
                    mat[i][j] = 1;
                }
                else{
                    mat[i][j] = 0;
                }
            }
        }
        int area = largestRectangleArea(mat[0]);

        for(int i=1;i<row;i++){
            for(int j=0;j<cols;j++){
                if(mat[i][j]!=0){
                    mat[i][j] += mat[i-1][j];
                }
                else{
                    mat[i][j] = 0;
                }
            }
            area=max(area,largestRectangleArea(mat[i]));
        }
        return area;
    }
};