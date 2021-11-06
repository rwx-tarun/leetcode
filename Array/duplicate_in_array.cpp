class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
       set<int>s;
        for(auto x : a)
                s.insert(x);
        if(s.size()==a.size())
            return false;
        return true;
    }
};
