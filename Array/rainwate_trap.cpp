class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();
        vector<int>rt(n,INT_MIN);
        vector<int>lf(n,INT_MIN);
        lf[0]=a[0];
        rt[n-1]=a[n-1];
        for(int i =1;i<n;i++)
            lf[i]=max(lf[i-1],a[i]);
        for(int i=n-2;i>=0;i--)
            rt[i]=max(rt[i+1],a[i]);
        
        int res =0;
        for(int i=0;i<n;i++)
        {
            res = res + min(lf[i],rt[i])-a[i];
        }
        
        return res;
    }
};
