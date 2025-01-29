void sortColors(int* nums, int n) 
{
    int z=0,o=0,t=0,i=0;
    for(int j=0;j<n;j++)
    {
        if(nums[j]==0) z++;
        else if(nums[j]==1) o++;
        else t++;
    }
    while(z--)
     nums[i++]=0;
    while(o--)
     nums[i++]=1;
    while(t--)
     nums[i++]=2;


         
}