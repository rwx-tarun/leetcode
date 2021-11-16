40. Combination Sum II



class Solution {
public:
    void solve(vector<int>& a,int x,vector<int>&r,vector<vector<int>>&res,int idx)
    {
        if(x==0)
        {
            res.push_back(r);
            return;
        }
        if(idx == a.size())
        {
            return;
        }
        for(int i=idx;i<a.size();i++)
        {      
            if(a[i]>x)  return;
            if(i && a[i]==a[i-1] && i>idx)   continue;
                r.push_back(a[i]);
                solve(a,x-a[i],r,res,i+1);
                r.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& a, int x) {
        sort(a.begin(),a.end());
        vector<int>r;
        vector<vector<int>>res;
        solve(a,x,r,res,0);
        return res;
    }
    
};
