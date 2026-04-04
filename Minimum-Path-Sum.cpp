1class Solution {
2public:
3    int minPathSum(vector<vector<int>>& grid) {
4        int n=grid.size();
5        int m=grid[0].size();
6        vector<vector<int>> dp(n,vector<int>(m,0));
7
8        for(int i=0;i<n;i++){
9            for(int j=0;j<m;j++){
10                if(i==0 && j==0) dp[i][j]=grid[0][0];
11                else{
12                    int up=INT_MAX,left=INT_MAX;
13                    if(i>0)  
14                        up=grid[i][j]+dp[i-1][j];
15                    if(j>0)
16                     left=grid[i][j]+dp[i][j-1];
17                    dp[i][j]=min(up,left);
18                }
19            }
20        }
21        return dp[n-1][m-1];
22    }
23};