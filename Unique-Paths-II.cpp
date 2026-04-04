1class Solution {
2public:
3    int f(int i,int j,vector<vector<int>> &arr,vector<vector<int>> &dp){
4        if(i>=0 && j>=0 && arr[i][j]==1) return 0;
5        if(i==0 && j==0) return 1;
6        if(i<0 || j<0) return 0;
7        if(dp[i][j] != -1) return dp[i][j];
8        int up=f(i-1,j,arr,dp);
9        int left=f(i,j-1,arr,dp);
10        return dp[i][j]=up+left;
11    }
12    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
13        int m=obstacleGrid.size();
14        int n=obstacleGrid[0].size();
15        vector<vector<int>> dp(m,vector<int> (n,-1));
16
17        return f(m-1,n-1,obstacleGrid,dp);
18    }
19};