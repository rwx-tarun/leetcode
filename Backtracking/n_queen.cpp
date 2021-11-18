class Solution {
public:
    bool isSafe(vector<int>col,int c,int r)
    {
        for(int i=0;i<r;i++)
        {
            if(col[i]==c)
                return false;
            if(r+c == i+col[i] || (r-c)==(i-col[i]))
                return false;
        }
            return true;
    }
    

    void solve(int n ,vector<vector<string>>&res,int r,vector<int>&col,vector<string>s)
    {
        if(r==n)
        {   

            for(int i =0;i<n;i++)
            {   
                string temp = "";
                for(int i=0;i<n;i++)
                    temp+='.';
                temp[col[i]]='Q';
                s.push_back(temp);
                temp="";
            }
            res.push_back(s);


            return ;
        }
        for(int c =0;c<n;c++)
        {
            if(isSafe(col,c,r))
            {
                col[r]=c;
                solve(n,res,r+1,col,s);
                col[r]=-1;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<int>col(n,-1);
        vector<vector<string>>res;
        vector<string>v;
        solve(n,res,0,col,v);
    return res;
    }
};
