class Solution {
public:
    bool isValid(string s) 
    {
        int c =0 ,v =0 , asc;
        if(s.length()<3) return false;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]))
            {
             if(int(s[i]<97))
              s[i] = int(s[i])+32;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                v = 1;
            else if(isalpha(s[i]))
                c = 1;
            else if(isdigit(s[i])){}
            else 
             return false;
             
        }
        if(c == 1 && v==1)
         return true;
        return false;
    }
};