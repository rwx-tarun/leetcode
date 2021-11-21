// https://leetcode.com/problems/reverse-pairs/


class Solution {
public:
    int merge(vector<int>&A,int h,int l,int m)
{   
        int i =l;
        int j=m+1;
        int cnt = 0;
        int k=0;
        vector<int>t(h-l+1,0);
    while(i<=m && j<=h)
    {
        if(A[i]<=(2LL*A[j]))
            i++;
        else
        {
            cnt =cnt+(m-i+1);
            j++;
        }
    }
    i =l;
    j=m+1;
    k=0;
    while(i<=m && j<=h){
        if(A[i]<=A[j]){
            t[k++]=A[i++];
        }
        else{
            t[k++]=A[j++];
        }
    }
    while(i<=m)
        t[k++]=A[i++];
    while(j<=h)
        t[k++]=A[j++]; 
        
    for (int i = 0; i < k; i++){
        A[l++] = t[i];
    }
    return cnt;
}
    
    int mergeSort(vector<int> &A,int l,int h)
{   
    int inv = 0;
    if(l<h)
    {
        int m = l+(h-l)/2;
        inv = inv + mergeSort(A,l,m);
        inv = inv + mergeSort(A,m+1,h);
        inv = inv + merge(A,h,l,m);
    }
    return inv;
}

    int reversePairs(vector<int>& A) {
        int r =  mergeSort(A,0,A.size()-1);
        return r;
    }
};
