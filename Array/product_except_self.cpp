// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int pre = 1 , suf =1;
        int n =  a.size();
        vector<int>res(n,1);
        for(int i=0;i<n;i++)
        {
            res[i] = res[i]*pre;
            pre = pre *a[i];
            res[n-1-i] = res[n-1-i] * suf;
            suf = suf *a[n-1-i];
        }
        return res;
    }
};
