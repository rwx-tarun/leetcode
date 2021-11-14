class Solution {
public:
    void moveZeroes(vector<int>& ar) {
        int a=0,b=0;
        while(a<ar.size())
        {
            if(ar[a]!=0)
            {
                swap(ar[a],ar[b]);
                b++;
            }
            a++;
        }
    }
};
