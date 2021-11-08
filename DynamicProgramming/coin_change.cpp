class Solution {
public:
    int coinChange(vector<int>& a, int amt) {
        vector<int>dp(amt+1,INT_MAX-1);
        dp[0]=0;
        for(int i=1;i<=amt;i++)
        {
            for(int j=0;j<a.size();j++)
            {
                if(i>=a[j])
                    dp[i]=min(dp[i],1+dp[i-a[j]]);

            }
        }
        if(dp[amt] > amt)  
            return -1;
        return dp[amt];
    }
};
