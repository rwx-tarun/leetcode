class Solution {
public:
    
    bool isSafe(int r, int c,vector<int>col)
    {
        for(int i =0;i<r;i++)
        {
            if(col[i]==c)
                return false;
            if(r+c == i+col[i] || (r-i) == (c-col[i]))
               return false;
        }
               return true;
    }
    void solve(int r , vector<int>&col,int n , int &cnt)
    {
        if(r==n)
        {
            cnt++;
            return ;
        }
        for(int c = 0;c<n;c++)
        {
            if(isSafe(r,c,col))
            {
                col[r]=c;
                solve(r+1,col,n,cnt);
                col[r]=-1;
            }
        }
    }
    
    
    int totalNQueens(int n) {
        vector<int>col(n,-1);
        int cnt = 0;
        solve(0,col,n,cnt);
        return cnt;
    }
};
