void solve(vector<int> &A,vector<vector<int> >&res,int s ,int e)
{
    if(s==e)
    {
        res.push_back(A);
        return ;
    }
    for(int i=s;i<A.size();i++)
    {
        swap(A[s],A[i]);
        solve(A,res,s+1,e);
        swap(A[i],A[s]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> res;
    solve(A,res,0,A.size()-1);
    return res;
}
