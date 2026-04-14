1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n=prices.size();
5        vector<vector<int>> dp(n+2,vector<int>(2,0));
6        for(int idx=n-1;idx>=0;idx--){
7            for(int buy=0;buy<=1;buy++){
8               if(buy==1){
9                dp[idx][buy]=max(-prices[idx]+dp[idx+1][0],0+dp[idx+1][1]);
10               }else{
11                dp[idx][buy]=max(prices[idx]+dp[idx+2][1],0+dp[idx+1][0]);
12               }
13            }
14        }
15        return dp[0][1];
16    }
17};