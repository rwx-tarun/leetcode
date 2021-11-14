//https://leetcode.com/problems/permutation-sequence/

class Solution {
    
public:
    void solve(vector<int>& a,vector<vector<int>>&res,int s,int e){
        if(s==e)    
        {
            res.push_back(a);
            return;
        }
        for(int i=s;i<e;i++)
        {
            swap(a[s],a[i]);
            solve(a,res,s+1,e);
            swap(a[s],a[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& a) {
        vector<vector<int>>res;
        solve(a,res,0,a.size());
        return res;
    }
};
