https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
   
    void solve(int open,int close , int cnt,string s,vector<string>&res)
    {
        if(open<close)
            return;
        if(open == close && cnt==0)
        {
            res.push_back(s);
            return ;
        }
        if(cnt==0)
            return ;
        if(cnt>0)solve(open+1,close,cnt-1,s+"(",res);
        if(cnt>0)solve(open,close+1,cnt-1,s+")",res);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>res;
            solve(0,0,2*n,"",res);
        return res;
        
    }
};
