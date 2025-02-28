//by recurrsion

class Solution
{
    private:
    void reverse(queue<int> &d){
         if(d.empty()){
            return;
         }
         
         int ans = d.front();
         d.pop();
         reverse(d);
         d.push(ans);
         }
    public:
    queue<int> rev(queue<int> q)
    {
        reverse(q);
        return q;
    }
};


//BY Stack

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> s;
        while(!q.empty()){
            s.push(q.front());
            q.pop();
        }
        
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        return q;
        
    }
};