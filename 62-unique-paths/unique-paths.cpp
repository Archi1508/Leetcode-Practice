class Solution {
public:
// vector<vector<int>>dp=vector<vector<int>>(101,vector<int>(101,-1));
//     int uniquePaths(int m, int n) {
//         if(m==1 && n==1) return dp[m][n]=1;
//         if(dp[m][n]!=-1)return dp[m][n];
//         int top=0,left=0;
//         if(n-1>=0) left=uniquePaths(m,n-1);
//         if(m-1>=0) top=uniquePaths(m-1,n);
//         return dp[m][n] = left+top;
//     }

    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1));
        dp[1][1]=1;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i>1 || j>1 ) dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
            
        }
        return dp[m][n];
    }
};