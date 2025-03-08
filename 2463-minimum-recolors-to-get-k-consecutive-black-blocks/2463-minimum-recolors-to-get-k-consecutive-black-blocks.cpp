class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        vector<int> prefix_sum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix_sum[i + 1] = prefix_sum[i] + (blocks[i] == 'W' ? 1 : 0);
        }
        int min_operations = n;
        for (int i = k; i <= n; ++i) {
            min_operations = min(min_operations, prefix_sum[i] - prefix_sum[i - k]);
        }
        return min_operations;
    }
};
