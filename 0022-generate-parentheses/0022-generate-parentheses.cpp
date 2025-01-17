class Solution {
public:
    vector<string> ans;
    void backtrack(int op ,int cl, string s, int n)
    {
        if(s.size()==2*n)
        {
            ans.push_back(s);
            return;
        }
        if(op<n)
        {
            s.push_back('(');
            backtrack(op+1,cl,s,n);
            s.pop_back();
        }
        if(cl<op)
        {
            s.push_back(')');
            backtrack(op,cl+1,s,n);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        string s="";
        backtrack(0,0,s,n);
        return ans;    
    }
};