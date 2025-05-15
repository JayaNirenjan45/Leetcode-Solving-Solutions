class Solution {
    public List<String> validStrings(int n) {
        List<String> ans = new ArrayList<>();
        helper(ans, new StringBuilder(), n, true);
        return ans;
    }

    void helper(List<String> ans, StringBuilder cur, int n, boolean one) {
        if (n <= 0) {
            ans.add(cur.toString());
            return;
        }

        if (one) {
            cur.append('0');
            helper(ans, cur, n - 1, false);
            cur.deleteCharAt(cur.length() - 1);
        }
        
        cur.append('1');
        helper(ans, cur, n - 1, true);
        cur.deleteCharAt(cur.length() - 1);
    }
}