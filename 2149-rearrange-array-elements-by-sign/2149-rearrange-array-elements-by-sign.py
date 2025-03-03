class Solution(object):
    def rearrangeArray(self, nums):
        l1=[]
        l2=[]
        for i in nums:
            if(i>0):
                l1.append(i)
            elif(i<0):
                l2.append(i)
        l3=[]
        m=len(l1)
        n=len(l2)
        i=0
        j=0
        while(i<m and j<n):
            l3.append(l1[i])
            l3.append(l2[j])
            i=i+1
            j=j+1
        return l3
        