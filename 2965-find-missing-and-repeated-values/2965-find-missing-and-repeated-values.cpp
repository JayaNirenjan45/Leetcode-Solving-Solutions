class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        vector<int>v;
        vector<int>res;
        unordered_map<int,int>c; 
        int n=grid.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                c[grid[i][j]]++;
            }
        }
        for (const auto& i : c)
        {
            if(i.second>1)
             res.push_back(i.first);
        }
        for (const auto& i : c)
        {
            v.push_back(i.first);
        }
        sort(v.begin(),v.end());
        int k=1;
        for(int i : v)
        {
            if(i!=k)
            {
                res.push_back(k);
                break;
            }
            k++;
        }
        if(res.size()==1)
         res.push_back(k);
        return res;
    }
};