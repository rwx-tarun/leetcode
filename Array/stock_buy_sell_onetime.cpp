// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.



class Solution {
public:
    int maxProfit(vector<int>& a) {
        // 7 1 5 3 6 4 
        int mn = INT_MAX;
        int n = a.size();
        int profit = 0;
        for(int i=0;i<n;i++){
            if(profit < a[i]-mn)
                profit = a[i] - mn;
            mn = min(a[i],mn);
        }
        return profit;
    }
};
