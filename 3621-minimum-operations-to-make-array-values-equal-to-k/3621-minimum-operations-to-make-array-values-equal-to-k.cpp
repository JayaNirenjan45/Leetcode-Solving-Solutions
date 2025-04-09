class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        if (k > nums[0])
            return -1;

        int res = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] != nums[i])
                res++;
        }
        if (k != nums[0]) 
            res++;
        return res;   
    }
};

