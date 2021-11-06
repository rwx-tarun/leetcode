// Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.

// It is guaranteed that the answer will fit in a 32-bit integer.

// A subarray is a contiguous subsequence of the array.

 


class Solution {
public:
    int maxProduct(vector<int>& a) {
        int res,mnp,mxp;
        res=mxp=mnp= a[0];
        int ch1,ch2;
        int n = a.size();
        for(int i=1;i<n;i++)
        {   
            ch1 = mxp*a[i];
            ch2 = mnp*a[i];
            mxp = max(a[i],max(ch1,ch2));
            mnp = min(a[i],min(ch1,ch2));
            res= max(res,mxp);
        }
        return res;
    }
};
