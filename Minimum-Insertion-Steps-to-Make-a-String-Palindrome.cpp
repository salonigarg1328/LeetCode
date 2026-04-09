1class Solution {
2public:
3    int lcs(string s, string t){
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
22    int longestpalindrome(string s){
23        string t = s;
24        reverse(t.begin(), t.end());
25        return lcs(s, t);
26    }
27
28    int minInsertions(string s) {
29        return s.size() - longestpalindrome(s);
30    }
31};