class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> n = nums;
        sort(n.begin(),n.end());
        if(n == nums)
         return true;
        reverse(n.begin(),n.end());
        if(n == nums)
         return true;
        return false;
    }
};