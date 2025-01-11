class Solution(object):
    def plusOne(self, digits):
        n=""
        for i in digits:
            n = n + str(i)
        x = int(n)
        print(x)
        x = x+1
        f=str(x)
        l=[]
        for i in range(0,len(f)):
            l.append(int(f[i]))
        return l  