class Solution {
    public boolean isArraySpecial(int[] nums) 
    {
        int x = nums[0];
        if(x%2==0)
        {
            for(int i=0;i<nums.length;i++)
            {
                if(i%2==0 && nums[i]%2!=0)
                 return false;
                if(i%2!=0 && nums[i]%2==0)
                 return false;
            }
        }
        else
        {
            for(int i=0;i<nums.length;i++)
            {
                if(i%2==0 && nums[i]%2==0)
                    return false;
                if(i%2!=0 && nums[i]%2!=0)
                    return false;
            }
        }
        return true;
    }
}