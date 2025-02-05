class Solution {
public:
    int numberOfSpecialChars(string word) 
    {
        char a[26]={0},b[26]={0};
        int c=0;
        for(int i=0;i<word.length();i++)
        {
            if(int(word[i])>=65 && int(word[i])<=96)
             a[int(word[i])-65]++;
            if(int(word[i])>=97 && int(word[i])<=122)
             b[int(word[i])-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]>=1 && b[i]>=1){c++;}
        }
        return c;

    }
};