1class Solution {
2public:
3    int lcs(string s, string t) {
4        int n = s.size();
5        int m = t.size();
6        
7        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
8        
9        for(int i = 1; i <= n; i++) {
10            for(int j = 1; j <= m; j++) {
11                if(s[i-1] == t[j-1]) {
12                    dp[i][j] = 1 + dp[i-1][j-1];
13                } else {
14                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
15                }
16            }
17        }
18        
19        return dp[n][m];
20    }
21    
22    int minDistance(string word1, string word2) {
23        int n = word1.size();
24        int m = word2.size();
25        
26        int lcsLen = lcs(word1, word2);
27        
28        return n + m - 2 * lcsLen;
29    }
30};