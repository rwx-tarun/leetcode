class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n =a.size();
        int l= 0,h=n-1;
        while(l<=h){
            int m = l+(h-l)/2;
            if((m==0 || a[m-1]<=a[m]) && (m==n-1 || a[m+1]<=a[m]))
                return m;
           if(m>0  && a[m-1]>=a[m])
                h=m-1;
            else
                l=m+1;
            }
        return 0;
    }
};
