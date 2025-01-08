class Solution(object):
    def countAndSay(self, n):
        if(n==1):
            return '1'
        prev = self.countAndSay(n-1)
        ans=""
        c=1
        for i in range(len(prev)):

            if( i+1 < len(prev) and prev[i] == prev[i+1]):
                c=c+1
            else:
                ans = ans + str(c)+(prev[i])
                c=1
        return ans


        