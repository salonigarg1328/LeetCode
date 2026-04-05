class Solution {
public:
    bool subsettok(int n,int k,vector<int> &nums){
        vector<bool> prev(k+1,0),curr(k+1,0);
        prev[0]=curr[0]=true;
        if(nums[0]<=k) prev[nums[0]]=true;
        for(int idx=1;idx<n;idx++){
            for(int target=1;target<=k;target++){
                bool nottake=prev[target];
                bool take=false;
                if(nums[idx]<=target)  take=prev[target-nums[idx]];
                curr[target]= take || nottake;
            }
            prev=curr;
        }
        return prev[k];
    }
    bool canPartition(vector<int>& nums) {
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum += nums[i];
        }
        if(totalsum % 2) return false;
        int target=totalsum/2;
        return subsettok(nums.size(),target,nums); 
    }
};