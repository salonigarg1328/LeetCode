1class Solution {
2public:
3    int uniquePaths(int m, int n) {
4        vector<vector<int>> dp(m,vector<int> (n,0));
5        dp[0][0]=1;
6        for(int i=0;i<m;i++){
7            for(int j=0;j<n;j++){
8                if(i==0 && j==0)   dp[0][0]=1;
9                else{
10                    int up=0,left=0;
11                    if(i>0) up=dp[i-1][j];
12                    if(j>0) left=dp[i][j-1];
13                    dp[i][j]=up+left;
14                }
15            }
16        }
17        return dp[m-1][n-1];
18        
19    }
20};