class Solution {
public:
    bool check(vector<string>&board,int i,int j)
    {
        int n=board.size();
        int row=i,col=j;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')return false;    //Diagonal
            row--;col--;
        }
        row=i,col=j;
        while(row>=0)
        {
            if(board[row][col]=='Q')return false;    // Row wise
            row--;
        }
        row=i,col=j;
        while(row>=0 && col<n)
        {
            if(board[row][col]=='Q')return false;    // Column wise
            row--;col++;
        }
        return true;
    }
    void w(int row,vector<vector<string>>&ans,vector<string>&board)
    {
        int n=board.size();
        if(row==n)
        {
            ans.push_back(board);
            return;
        }
        for(int col=0;col<n;col++)
        {
            if (check(board, row, col)) 
            {
                board[row][col] = 'Q';
                w(row + 1, ans, board); 
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>>ans;
        vector<string>board(n, string(n, '.'));
        w(0,ans,board);
        return ans;
    }
};