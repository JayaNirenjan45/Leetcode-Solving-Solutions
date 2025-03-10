class Solution {
public:
    void solve(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, int index){
        if(index == nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=index; i<temp.size(); i++){
            swap(temp[index] , temp[i]);
            solve(nums, ans, temp, index+1);
            swap(temp[index] , temp[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> temp = nums;
        solve(nums, ans, temp, 0);
        return ans;
    }
};



