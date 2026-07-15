class Solution {
public:
int rec(vector<int>&coins,int amount,vector<int>&dp)
{
    if(amount==0)return dp[amount] = 0;
    if(dp[amount]!=-1)return dp[amount];
    int ans = INT_MAX;
    for(int i=0;i<coins.size();i++)
    {
        if(amount>=coins[i])
        {
            ans=min(ans,rec(coins,amount-coins[i],dp));
        }
      
    }
      if(ans==INT_MAX)
        return dp[amount]=INT_MAX;
        return dp[amount] = 1+ans;
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>dp(amount+1,-1);
        int ans= rec(coins,amount,dp);
        if(ans==INT_MAX)return -1;
        return ans;
    }
};