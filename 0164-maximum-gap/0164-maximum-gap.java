class Solution {
    public int maximumGap(int[] nums) 
    {
        Arrays.sort(nums);
        int max=0,n=nums.length,x;
        for(int i=0;i<n-1;i++)
            {
                x=Math.abs(nums[i+1]-nums[i]);
                if(x>max)
                 max=x;
            } 
        return max;
    }
}