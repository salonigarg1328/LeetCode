1class Solution {
2public:
3    int change(int amount, vector<int>& coins) {
4        vector<long long> dp(amount + 1, 0);
5        
6        dp[0] = 1;
7
8        for (int coin : coins) {
9            for (int j = coin; j <= amount; j++) {
10                dp[j] += dp[j - coin];
11                if (dp[j] > INT_MAX) dp[j] = INT_MAX;
12            }
13        }
14
15        return (int)dp[amount];
16    }
17};