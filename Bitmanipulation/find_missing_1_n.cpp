class Solution {
public:
    int missingNumber(vector<int>& a) {
        int xr =a.size();
        int n = a.size();
        for(int i=0;i<n;i++)
        {
            xr = xr ^ i;
            xr = xr ^ a[i];
        }
        return xr;
    }
};
