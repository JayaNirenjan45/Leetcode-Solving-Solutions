class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        vector<int>count(26,0);
        for(int i=0;i<s.size();i++)
           count[s[i]-'a']++;
        int c,j=0;
        for(int i=0;i<26;i++)
        {
            if(count[i]>0)
            {
                c = count[i];
                j=i;
                break;
            }
        }
        for(int i=j+1;i<26;i++)
        {
            if(count[i] != c && count[i]!=0)
              return false;
        }
        return true;
    }
};