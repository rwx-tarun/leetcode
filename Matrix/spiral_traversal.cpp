class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        int lf =0,rt=m-1;
        int top=0,btm = n-1;
        vector<int>res;
        while(lf<=rt && top<=btm)
        {
            for(int i=lf;i<=rt;i++)
            {
                res.push_back(a[top][i]);
            }
            top++;
            for(int i=top;i<=btm;i++)
            {
                res.push_back(a[i][rt]);
            }
            rt--;
            if(top<=btm)
            {
                for(int i=rt;i>=lf;i--)
                res.push_back(a[btm][i]);
            }
            btm--;
            if(lf<=rt)
            {
                for(int i=btm;i>=top;i--)
                res.push_back(a[i][lf]);
            }
            lf++;
            
        }
        return res;
        
    }
};
