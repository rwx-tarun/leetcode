class Solution {
public:
    int findUnsortedSubarray(vector<int>& A) {
        int n = A.size();
        int lf =-1;
        int rt = -1;
        for(int i=0;i<n-1;i++){
            if(A[i]>A[i+1]){
                lf=i;
                break;
            }
        }
        
        if(lf == -1)
            return 0;

        for(int i=n-1;i>0;i--){
            if(A[i]<A[i-1]){
                rt = i;
                break;
            }
        }
        int mx=INT_MIN,mn = INT_MAX;
        for(int i=lf;i<=rt;i++)
        {
            mx = max(A[i],mx);
            mn = min(A[i],mn);
        }

        for(int i=0;i<lf;i++){
            if(A[i]>mn){
                lf = i;
                break;
            }
        }

        for(int i=n-1;i>=rt;i--){
            if(A[i]<mx)
            {
                rt = i;
                break;
            }
        }
        return rt-lf+1;
    }
};
