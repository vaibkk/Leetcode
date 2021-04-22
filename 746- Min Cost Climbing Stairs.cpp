class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
    int len=cost.size();
    vector<int> dp(len+1, 0);
    dp[0] = 0; 
    dp[1] = 0;
    dp[2] = min(cost[0], cost[1]);
    for(int i=3; i<=len; i++)
    {
        dp[i] = min(dp[i-1]+cost[i-1], dp[i-2]+cost[i-2]);
    }
  
    return dp[len];
}
};