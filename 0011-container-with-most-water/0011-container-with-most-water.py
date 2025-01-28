class Solution:
    def maxArea(self, v):
        i = 0
        n = len(v)
        j = n - 1
        area = 0
        while j > i:
            area = max(area, min(v[i], v[j]) * abs(i - j))
            if v[i] < v[j]:
                i += 1
            else:
                j -= 1
        return area