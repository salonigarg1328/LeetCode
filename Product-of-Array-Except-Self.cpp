1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(n,1);
6        int prefix=1;
7        for(int i=0;i<n;i++){
8            ans[i]=prefix;
9            prefix *= nums[i];
10        }
11        int suffix=1;
12        for(int i=n-1;i>=0;i--){
13            ans[i]*=suffix;
14            suffix*=nums[i];
15        }
16        return ans;
17    }
18};