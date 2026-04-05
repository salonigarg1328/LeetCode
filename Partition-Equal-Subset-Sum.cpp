1class Solution {
2public:
3    bool subsettok(int n,int k,vector<int> &nums){
4        vector<bool> prev(k+1,0),curr(k+1,0);
5        prev[0]=curr[0]=true;
6        if(nums[0]<=k) prev[nums[0]]=true;
7        for(int idx=1;idx<n;idx++){
8            for(int target=1;target<=k;target++){
9                bool nottake=prev[target];
10                bool take=false;
11                if(nums[idx]<=target)  take=prev[target-nums[idx]];
12                curr[target]= take || nottake;
13            }
14            prev=curr;
15        }
16        return prev[k];
17    }
18    bool canPartition(vector<int>& nums) {
19        int totalsum=0;
20        for(int i=0;i<nums.size();i++){
21            totalsum += nums[i];
22        }
23        if(totalsum % 2) return false;
24        int target=totalsum/2;
25        return subsettok(nums.size(),target,nums); 
26    }
27};