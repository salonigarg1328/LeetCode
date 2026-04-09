1class Solution {
2public:
3    int longestPalindromeSubseq(string s) {
4        string rev = s;
5        reverse(rev.begin(), rev.end());
6        
7        int n = s.size();
8        
9        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
10        
11        for(int i = 1; i <= n; i++) {
12            for(int j = 1; j <= n; j++) {
13                if(s[i-1] == rev[j-1]) {
14                    dp[i][j] = 1 + dp[i-1][j-1];
15                } else {
16                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
17                }
18            }
19        }
20        
21        return dp[n][n];
22    }
23};