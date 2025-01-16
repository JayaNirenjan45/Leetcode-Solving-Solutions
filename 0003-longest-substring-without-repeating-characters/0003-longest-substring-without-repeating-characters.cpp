class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        map<char , int> count;
        int st=0,end=0,l=0;
        while(end < s.size())
        {
            count[s[end]]++;
            while(count[s[end]] > 1)
            {
                count[s[st]]--;
                st++;
            }
            l = max(l, end-st+1);
            end++;
        }    
        return l;
    }
};