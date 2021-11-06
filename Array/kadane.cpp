class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int local  = a[0],global=a[0];
        int n = a.size();
    
        for(int i=1;i<n;i++)
        {
            local = max(local+a[i],a[i]);
            global = max(global,local);
        }
        return global;
    }
};
