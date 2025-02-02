class Solution {
    public boolean checkString(String s) 
    {
        int f=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='a' && f==1)
             return false;
            
            if(s.charAt(i)=='b')
            {
                f=1;
            }
        }
        return true;
    }
}