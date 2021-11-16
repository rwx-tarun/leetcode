class Solution {
public:
    void solve(vector<int>& a,int x,vector<vector<int>>&res,vector<int>v,int idx)
    {
        if(x==0)    
        {
            res.push_back(v);
            return;
        }
        if(idx==a.size())
            return ;
        
        //accept  a[idx]
        if(a[idx]<=x)
        {
            v.push_back(a[idx]);
            solve(a,x-a[idx],res,v,idx);
            v.pop_back();
        }
        //reject  a[idx]
        solve(a,x,res,v,idx+1);
        
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& a, int x) {
        vector<vector<int>>res;
        vector<int>v;
        solve(a,x,res,v,0);
        
        return res;
    }
    
};
