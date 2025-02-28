vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[i] <= st.top()) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}