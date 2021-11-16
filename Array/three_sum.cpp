class Solution {

  
  public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(),a.end());
        int l,h;
        int n = a.size();
        vector<vector<int>>res;
        vector<int>v;
        for(int i=0;i<n-2;i++)
        {
            if(i==0 || a[i]!=a[i-1])
            {
                l=i+1;
                h=n-1;
                while(l<h)
                {
                    if(a[i]+a[l]+a[h]==0){
                        v.push_back(a[i]);
                        v.push_back(a[l]);
                        v.push_back(a[h]);
                        res.push_back(v);
                        v.clear();
                        while(l<h && a[l]==a[l+1])l++;
                        while(l<h && a[h]==a[l-1])h--;
                        l++;
                        h--;
                    }
                    else if(a[i]+a[l]<0-a[h])
                            l++;
                    else h--;
                }
            }  
        }
        return res;
    }
};
