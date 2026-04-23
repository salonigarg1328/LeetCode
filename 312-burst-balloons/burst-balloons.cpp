class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n + 2, 1);
        for(int i = 0; i < n; i++) {
            arr[i + 1] = nums[i];
        }
        int m = n + 2;
        vector<vector<int>> dp(m, vector<int>(m, 0));
        for(int len = 2; len < m; len++) {
            for(int i = 0; i + len < m; i++) {
                int j = i + len;
                for(int k = i + 1; k < j; k++) {
                    int coins = arr[i] * arr[k] * arr[j]
                              + dp[i][k]
                              + dp[k][j];
                    dp[i][j] = max(dp[i][j], coins);
                }
            }
        }
        return dp[0][m - 1];
    }
};