class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        string ans = "";
        stack<char> st;
        int cnt = 1;
        for (int i = 0; i <= n; i++) {
            st.push(cnt + '0');
            cnt++;

            if (i == n || pattern[i] == 'I') {
                while (!st.empty()) {
                    ans += st.top();
                    st.pop();
                }
            }
        }
        return ans;
    }
};