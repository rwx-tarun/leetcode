class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        if(a.size()==0)
            return 0;
       int i=0;
       int j = 1;
        while(j<a.size())
        {
            if(a[i]!=a[j])
                a[++i]=a[j]; 
            else
                j++;   
        }
        return i+1;
        
    }
};
