class Solution {
public:
    int findway(vector<int>&nums,int target){
       int n=nums.size();
       vector<int> prev(target+1,0),curr(target+1,0);
       if(nums[0]==0) prev[0]=2;
       else prev[0]=1;
       if(nums[0]!=0 && nums[0]<=target) prev[nums[0]]=1;
       for(int idx=1;idx<n;idx++){
        for(int sum=0;sum<=target;sum++){
            int nottake=prev[sum];
            int take=0;
            if(nums[idx]<=sum) take=prev[sum-nums[idx]];
            curr[sum]=nottake+take;
            
        }
         prev=curr;
       }
        return prev[target];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalsum=0;
        for(auto it:nums) 
           totalsum += it;
        
        if(totalsum-target < 0 || (totalsum-target)%2) return false;
        return findway(nums,(totalsum-target)/2);
    }

};