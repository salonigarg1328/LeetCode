1class Solution {
2public:
3    int solve(vector<int> &nums,int start,int end){
4        int n=end-start+1;
5        if(n==1) return nums[start];
6        vector<int> dp(n,0);
7        dp[0]=nums[start];
8        for(int i=1;i<n;i++){
9            int take=nums[start+i];
10            if(i>1) take += dp[i-2];
11            int nottake=dp[i-1];
12            dp[i]=max(take,nottake);
13        }
14        return dp[n-1];
15    }
16    int rob(vector<int>& nums) {
17        int n=nums.size();
18        if(n==1) return nums[0];
19        int case1=solve(nums,0,n-2);
20        int case2=solve(nums,1,n-1);
21        return max(case1,case2);
22    }
23};