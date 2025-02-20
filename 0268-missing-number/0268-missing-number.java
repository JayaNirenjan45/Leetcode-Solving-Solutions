class Solution {
    public int missingNumber(int[] nums) 
    {
        int j=0;
        Arrays.sort(nums);
        for(int i=0;i<nums.length;i++,j++)  
        {
            if(nums[i]!=j)
             return j;
        }  
        return j++;
    }
}