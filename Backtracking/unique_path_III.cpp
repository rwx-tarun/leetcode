// You are given an m x n integer array grid where grid[i][j] could be:

// 1 representing the starting square. There is exactly one starting square.
// 2 representing the ending square. There is exactly one ending square.
// 0 representing empty squares we can walk over.
// -1 representing obstacles that we cannot walk over.
// Return the number of 4-directional walks from the starting square to the ending square, that walk over every non-obstacle square exactly once.



class Solution {
public:
    int ans;
    int xx[4]={1,0,0,-1};
    int yy[4]={0,1,-1,0};
    bool isValid(int u ,int v ,vector<vector<int>>A)
    {   
        int n  = A.size();
        int m = A[0].size();
        return 0<=u && u<n && 0<=v && v<m && A[u][v]!=-1;
    }
    void func(vector<vector<int> > A,int cnt,int x,int y)
    {
        if(A[x][y]==2 )
        {
            if(cnt==0)
                ans++;
            return ;
        }
        A[x][y]=-1;
        for(int i=0;i<4;i++)
        {
            int u =x+xx[i];
            int v = y+yy[i];
            if(isValid(u,v,A)){
                func(A,cnt-1,u,v);
            }
        }

    }
    int uniquePathsIII(vector<vector<int>>& A) {
        ans=0;
    int m = A[0].size();
    int n = A.size();
    int cnt =0;
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]== 0)
                cnt++;
            if(A[i][j]== 1){
                x=i;
                y=j;
            }
        }
    }
    func(A,cnt+1,x,y);
    return ans;
        
    }
};
