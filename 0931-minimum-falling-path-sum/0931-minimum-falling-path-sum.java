class Solution {
    public int minFallingPathSum(int[][] matrix) 
    {
        int m=matrix.length , n=matrix[0].length ;
        for(int i = m-2; i>=0 ; i--)
        {
            for(int j=0 ; j<n; j++)
            {
                int min = matrix[i+1][j];
                if(j>0)
                   min = Math.min( min , matrix[i+1][j-1]);
                if(j<n-1)
                   min = Math.min( min , matrix[i+1][j+1]);
                matrix[i][j] += min;   
            }
        }    
        int res = matrix[0][0];
        for(int i=0;i<n;i++)
        {
            res = Math.min(res , matrix[0][i]);
        }
        return res;
    }
}