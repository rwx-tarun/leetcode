// 77. Combinations

class Solution {
public:
    
    void solve(int k,int n,int s,vector<vector<int>>&res,vector<int>&temp,int idx)
    {
        if(s==k)
        {
            res.push_back(temp);
            return ;
        }
        for(int i=idx;i<n;i++)
        {
            temp.push_back(i+1);
            solve(k,n,s+1,res,temp,i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>temp;
        solve(k,n,0,res,temp,0);
        return res;
    }
};
