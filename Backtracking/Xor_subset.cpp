// https://leetcode.com/problems/sum-of-all-subset-xor-totals/


class Solution {
public:
    int sm;
    void solve(vector<int>& a,int i,int res)
    {
        if(i==a.size())
        {
            sm = sm+res;
            return ;
        }
        solve(a,i+1,res^a[i]);
        solve(a,i+1,res);
    }
    int subsetXORSum(vector<int>& a) {
        sm=0;
        solve(a,0,0);
        return sm;
    }
};
