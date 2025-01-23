class Solution {  
public:  
    int wiggleMaxLength(vector<int>& nums) {  
        if (nums.size() < 2) return nums.size(); 

        int count = 1; 
        int prevDiff = 0;

        for (int i = 1; i < nums.size(); ++i) {  
            int currDiff = nums[i] - nums[i - 1]; 

            if (currDiff > 0 && prevDiff <= 0) {  
                count++; 
                prevDiff = currDiff;   
            } else if (currDiff < 0 && prevDiff >= 0) {  
                count++;   
                prevDiff = currDiff;   
            }  
             
        }  

        return count;  
    }  
};