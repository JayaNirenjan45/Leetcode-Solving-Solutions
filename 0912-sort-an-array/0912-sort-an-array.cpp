class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        vector<int>v;
        priority_queue<int>q;
        for(auto i : nums)
         q.push(i*-1);
        while(!q.empty())
        {
            v.push_back(q.top()*-1);
            q.pop();
        }
        return v;
    }
};