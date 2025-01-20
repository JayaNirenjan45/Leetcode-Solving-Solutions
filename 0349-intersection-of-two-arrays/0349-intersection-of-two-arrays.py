class Solution(object):
    def intersection(self, nums1, nums2):
        l=[]
        for i in nums1:
                if(i in nums2 and (i not in l)):
                    l.append(i)
        return l
        