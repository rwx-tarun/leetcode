// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

class Solution {
public:
    void solve(vector<string>&t,int idx,string &a,string &temp,vector<string> &res)
    {
        if(idx == a.size()){
            res.push_back(temp);
            return;
        }
        
        string x = t[a[idx]-'0'];
        for(int i=0;i<x.length();i++)
        {
            temp.push_back(x[i]);
            solve(t,idx+1,a,temp,res);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string a) {
        if(a.size()==0)
                return vector<string>();
    vector<string>t{ "0",   "1",   "abc",  "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz" };
    vector<string>res;
        string temp;
        solve(t,0,a,temp,res);
        return res;
        
    }
};
