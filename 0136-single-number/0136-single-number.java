class Solution {
    public int singleNumber(int[] nums) 
    {
        Arrays.sort(nums);
        int a = nums[0];
        for(int i=1;i<=nums.length-1;i++)
        {
            a=a^nums[i];
        }
        return a;
    }
}