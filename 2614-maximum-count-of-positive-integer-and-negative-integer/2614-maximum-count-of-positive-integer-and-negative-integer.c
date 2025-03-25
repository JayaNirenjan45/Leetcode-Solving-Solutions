int maximumCount(int* nums, int numsSize) 
{
    int p=0,n=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>0) p++;
        else if(nums[i]<0) n++;
    }    
    if(p<n) return n;
    return p;
}