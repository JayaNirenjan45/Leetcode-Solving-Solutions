bool increasingTriplet(int* nums, int n) 
{
    int lm[n],rm[n];

    lm[0]=nums[0];
    for(int i=1;i<n;i++)
     lm[i]=fmin(lm[i-1],nums[i]);
     
    rm[n-1]=nums[n-1];
    for(int i=n-2;i>=0;i--)
     rm[i]=fmax(nums[i],rm[i+1]);
    
    for(int i=1;i<n-1;i++)
    {
        if(lm[i-1]<nums[i] && nums[i]<rm[i+1])
         return true;
    }
    return false;
}