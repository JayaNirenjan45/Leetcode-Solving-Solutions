class Solution {
    public int removeDuplicates(int[] nums) 
    {
        int n = nums.length;
        Arrays.sort(nums);
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                for(int j=i+1;j<n-1;j++)
                {
                    nums[j]=nums[j+1];
                }
                n--;
                i--;
            }
        }
        return n;
    }
}