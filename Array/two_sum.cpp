// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.
// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].



class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        
        unordered_map<int,int>mp;
        int n = a.size();
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            int t = target - a[i];
            if(mp.find(t)!=mp.end())
            {
                v.push_back(mp[t]);
                v.push_back(i);
                return v;
            }
            mp.insert({a[i],i});
        }
        return v;

    }
};
