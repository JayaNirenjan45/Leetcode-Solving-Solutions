class Solution(object):
    def findComplement(self, num):
        s=""
        d=0
        while(num>0):
            s=s+str(1-num%2)
            num=num/2
        for i in range(len(s)):
            d = d + int(s[i])*(2**i)
        return d
        