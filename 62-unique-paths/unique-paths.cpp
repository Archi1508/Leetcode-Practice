class Solution {
public:
vector<vector<int>>dp=vector<vector<int>>(101,vector<int>(101,-1));
    int uniquePaths(int m, int n) {
        if(m==1 && n==1) return dp[m][n]=1;
        if(dp[m][n]!=-1)return dp[m][n];
        int top=0,left=0;
        if(n-1>=0) left=uniquePaths(m,n-1);
        if(m-1>=0) top=uniquePaths(m-1,n);
        return dp[m][n] = left+top;
    }
};