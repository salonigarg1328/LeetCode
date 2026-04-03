class Solution {
public:
    int solve(vector<int> &nums,int start,int end){
        int n=end-start+1;
        if(n==1) return nums[start];
        vector<int> dp(n,0);
        dp[0]=nums[start];
        for(int i=1;i<n;i++){
            int take=nums[start+i];
            if(i>1) take += dp[i-2];
            int nottake=dp[i-1];
            dp[i]=max(take,nottake);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int case1=solve(nums,0,n-2);
        int case2=solve(nums,1,n-1);
        return max(case1,case2);
    }
};