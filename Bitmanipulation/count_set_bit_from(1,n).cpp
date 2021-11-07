class Solution {
public:
    int brian(int a)
    {   
        int cnt =0;
        while(a>0)
        {
            a=a&(a-1);
            cnt++;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>v(n+1,0);
        for(int i =1;i<n+1;i++)
        {
            v[i]=brian(i);
        }
        return v;
    }
};
