1class Solution {
2public:
3    int findNumberOfLIS(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> dp(n,1),cnt(n,1);
6        int maxi=1;
7        for(int i=0;i<n;i++){
8           for(int prev=0;prev<i;prev++){
9            if(nums[prev] < nums[i] && 1+dp[prev]>dp[i]){
10                dp[i]=1+dp[prev];
11                cnt[i]=cnt[prev];
12            }else if(nums[prev]<nums[i] && 1+dp[prev]==dp[i]){
13                cnt[i] += cnt[prev];
14            }
15           }
16           maxi=max(maxi,dp[i]);
17        }
18        int nos=0;
19        for(int i=0;i<n;i++){
20            if(dp[i]==maxi) nos+=cnt[i];
21        }
22        return nos;
23    }
24};