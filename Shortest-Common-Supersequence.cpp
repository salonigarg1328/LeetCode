1class Solution {
2public:
3    string shortestCommonSupersequence(string str1, string str2) {
4        int n = str1.size();
5        int m = str2.size();
6
7        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
8        for(int i = 1; i <= n; i++){
9            for(int j = 1; j <= m; j++){
10                if(str1[i-1] == str2[j-1]) 
11                    dp[i][j] = 1 + dp[i-1][j-1];
12                else 
13                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
14            }
15        }
16        string ans = "";
17        int i = n, j = m;
18
19        while(i > 0 && j > 0){
20            if(str1[i-1] == str2[j-1]){
21                ans += str1[i-1];
22                i--; j--;
23            }
24            else if(dp[i-1][j] > dp[i][j-1]){
25                ans += str1[i-1];
26                i--;
27            }
28            else{
29                ans += str2[j-1];
30                j--;
31            }
32        }
33
34        while(i > 0){
35            ans += str1[i-1];
36            i--;
37        }
38
39        while(j > 0){
40            ans += str2[j-1];
41            j--;
42        }
43
44        reverse(ans.begin(), ans.end());
45        return ans;
46    }
47};