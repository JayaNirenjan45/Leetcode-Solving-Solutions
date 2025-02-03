class Solution {
    public int maxSubArray(int[] nums) 
    {
        int m=nums[0],s=0;
        for(int i=0;i<nums.length;i++)
        {
            if(s<0)
             s=0;
            s=s+nums[i];
            m=Math.max(s,m);
        }    
        return m;
    }
}