1class Solution {
2public:
3     int f(vector<int> &nums){
4        int n=nums.size();
5        if(n==1) return nums[0];
6        vector<int> dp(n,0);
7        dp[0]=nums[0];
8        int neg=0;
9        for(int i=1;i<n;i++){
10            int take=nums[i];
11            if(i>1) take += dp[i-2];
12            int nottake=0+dp[i-1];
13            dp[i]=max(take,nottake);
14        }
15        return dp[n-1];
16     }
17    int rob(vector<int>& nums) {
18       
19        return f(nums);
20    }
21};