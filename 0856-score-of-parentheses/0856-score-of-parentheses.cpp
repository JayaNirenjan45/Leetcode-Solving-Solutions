class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0;
        stack<int> st;
        for (char it : s) {
            if (it == '(') {
                st.push(ans);
                ans = 0;
            } 
            else {
                ans = st.top() + max(1, 2 * ans);
                st.pop();
            }
        }
        return ans;
    }
};