1class Solution {
2public:
3    int findway(vector<int>&nums,int target){
4       int n=nums.size();
5       vector<int> prev(target+1,0),curr(target+1,0);
6       if(nums[0]==0) prev[0]=2;
7       else prev[0]=1;
8       if(nums[0]!=0 && nums[0]<=target) prev[nums[0]]=1;
9       for(int idx=1;idx<n;idx++){
10        for(int sum=0;sum<=target;sum++){
11            int nottake=prev[sum];
12            int take=0;
13            if(nums[idx]<=sum) take=prev[sum-nums[idx]];
14            curr[sum]=nottake+take;
15            
16        }
17         prev=curr;
18       }
19        return prev[target];
20    }
21    int findTargetSumWays(vector<int>& nums, int target) {
22        int totalsum=0;
23        for(auto it:nums) 
24           totalsum += it;
25        
26        if(totalsum-target < 0 || (totalsum-target)%2) return false;
27        return findway(nums,(totalsum-target)/2);
28    }
29
30};