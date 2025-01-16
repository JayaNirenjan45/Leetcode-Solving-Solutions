class Solution(object):
    def largestNumber(self, nums):
       for i in range(0,len(nums)-1):
        for j in range(i+1,len(nums)):
            l1=str(nums[i])
            l2=str(nums[j])
            n1=int(l1+l2)
            n2=int(l2+l1)
            if(n1<n2):
                nums[i],nums[j]=nums[j],nums[i]
       res=""
       for i in nums:
        res = res + str(i)
       return str(int(res))
        