// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

// Notice that you may not slant the container.

class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size();
        int h = n-1;
        int l = 0;
        int res =0;
        while(l<h)
        {
            res = max(res , min(a[l],a[h])*(h-l));
            if(a[h]>a[l])
                l++;
            else    h--;
        }
        return res;
    }
};
