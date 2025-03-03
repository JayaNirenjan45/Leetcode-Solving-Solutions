class Solution(object):
    def pivotArray(self, nums, pivot):
        l1=[]
        l2=[]
        l3=[]
        for i in nums:
            if(i<pivot):
                l1.append(i)
            elif(i==pivot):
                l2.append(i)
            else:
                l3.append(i)
        l1=l1+l2+l3
        return l1