class Solution {
public:
    int solve(int i, int j, int m, int n ,vector<vector<int>>&dp,vector<vector<int>>&gd)
    {
        if(i>=m || j>=n)
         return 0;
        if(gd[i][j]==1)
         return 0;
        if(i==m-1 && j==n-1)
         return 1;
        if(dp[i][j]!=-1)
         return dp[i][j];
        else 
         return dp[i][j] = solve(i+1,j,m,n,dp,gd) + solve(i,j+1,m,n,dp,gd);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& gd) 
    {
        int m = gd.size();
        int n = gd[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(0,0,m,n,dp,gd);

    }
};
