class Solution(object):
    def isAnagram(self, s, t):
        s = ''.join(sorted(s))
        t = ''.join(sorted(t))
        return s==t
        