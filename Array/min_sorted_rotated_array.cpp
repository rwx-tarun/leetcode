// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// You must write an algorithm that runs in O(log n) time.

 

class Solution {
public:
    int findMin(vector<int>& a) {

        int n =a.size();
        int low = 0;
        int high = n-1;
        int res = INT_MAX;
        
        while(low<=high)
        {
            int mid = low + (high -low )/2;
            if(res >=a[mid])
                res = a[mid];
            if(a[mid]>a[high])
                low = mid+1;
            else
                high = mid-1;

        }
        return res;
    }
        
};
