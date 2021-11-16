// https://leetcode.com/problems/palindrome-partitioning/


class Solution {
public:
    bool isPal(string x , int s ,int e)
    {
        while(s<=e)
        {
            if(x[s]!=x[e])
                return false;
            s++;
            e--;
        }
        return true;
    }
    void solve(string s,int idx,vector<vector<string>>&res,vector<string>&v)
    {
        if(idx==s.length())
        {
            res.push_back(v);
            return ;
        }
        for(int i=idx;i<s.length();i++)
        {
            if(isPal(s,idx,i))
            {
                v.push_back(s.substr(idx,i-idx+1));
                solve(s,i+1,res,v);
                v.pop_back();
            }
        }
    }
    
    
    vector<vector<string>> partition(string s) {
      vector<vector<string>> res;
        vector<string>v;
        solve(s,0,res,v);
        return res;
    }
};
