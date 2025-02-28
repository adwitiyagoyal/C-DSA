
//before this do NEXT SMALLER ELEMENT
private:
    vector<int> nextElement(vector<int> arr, int n){
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

     vector<int> previousElement(vector<int> arr, int n){
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
public:
    int RectangleArea(vector<int>& heights) {
        int n= heights.size();
        vector<int> next;
        next = nextElement(heights,n);
        vector<int> prev;
        prev = previousElement(heights,n);

        int area = INT_MIN;

        for(int i=0;i<n;i++){
            int l = heights[i];
            int b = next[i] - prev[i] - 1;
            
            int newarea = l*b; 
            area = max(area,newarea);
        }
        return area;
    }
};