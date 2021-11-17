class Solution {
public:
    int BSL(vector<int>& a,int x)
    {   
        int idx=-1;
        int l = 0;
        int h=a.size()-1;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(a[m]==x){
                idx = m;
                h=m-1;
            }
            else if(a[m]>x)
                h=m-1;
            else{
        
                l=m+1;
            }
        }
        return idx;
    }
    int BSR(vector<int>& a,int x)
    {   
        int idx=-1;
        int l = 0;
        int h=a.size()-1;
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(a[m]==x){
                idx = m;
                l=m+1;
            }
            else if(a[m]>x)
                h=m-1;
            else{
                l=m+1;
            }
        }
        return idx;
    }
    
    vector<int> searchRange(vector<int>& a, int x) {
        vector<int>res;
        int c = BSL(a,x);
        int b = BSR(a,x);

        res.push_back(c);
        res.push_back(b);
        return res;
    }
};
