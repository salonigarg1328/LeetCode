1class Solution {
2public:
3    int coinChange(vector<int>& coins, int amount) {
4        vector<int> dp(amount + 1, INT_MAX);
5        
6        dp[0] = 0;
7        
8        for(int i = 1; i <= amount; i++) {
9            for(auto coin : coins) {
10                if(i - coin >= 0 && dp[i - coin] != INT_MAX) {
11                    dp[i] = min(dp[i], 1 + dp[i - coin]);
12                }
13            }
14        }
15        
16        return dp[amount] == INT_MAX ? -1 : dp[amount];
17    }
18};