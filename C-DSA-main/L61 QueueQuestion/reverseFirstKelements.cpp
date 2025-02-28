class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
         stack<int> s;
         int n = q.size();
         for(int i = 0; i < k; i++){
             if(!q.empty()){
                int ans = q.front();
                q.pop();
                s.push(ans);
             }
             
         }
         
         for(int i = 0; i < k; i++){
             int ans = s.top();
             q.push(ans);
             s.pop();
         }
         
         for(int i = k; i < n; i++){
            if(!q.empty()){
                int ans = q.front();
                q.pop();
                q.push(ans);
            }
             
         }
         
         return q;
         
         
    }
};