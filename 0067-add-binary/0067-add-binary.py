class Solution(object):
    def addBinary(self, a, b):
        if(a == '0' and b == '0'):
            return a
        a=a[::-1]
        b=b[::-1]
        x=0
        d1=0
        d2=0
        for i in a:
            d1 = d1 + int(i)*pow(2,x)
            x=x+1
        x=0
        for i in b:
            d2 = d2 + int(i)*pow(2,x)
            x=x+1
        d1 = d1+d2
        res=""
        while(d1>0):
            res = res + str(d1%2)
            d1 = d1/2
        return res[::-1]
        
        