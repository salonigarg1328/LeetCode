1class Solution {
2public:
3    int minimumTotal(vector<vector<int>>& triangle) {
4        int n=triangle.size();
5        vector<vector<int>> dp(n,vector<int>(n,0));
6        for(int j=0;j<n;j++){
7            dp[n-1][j]=triangle[n-1][j];
8        }
9        for(int i=n-2;i>=0;i--){
10            for(int j=i;j>=0;j--){
11                int d=triangle[i][j]+dp[i+1][j];
12                int dg=triangle[i][j]+dp[i+1][j+1];
13                dp[i][j]=min(d,dg);
14            }
15        }
16        return dp[0][0];
17    }
18};