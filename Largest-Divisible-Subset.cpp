1class Solution {
2public:
3    vector<int> largestDivisibleSubset(vector<int>& nums) {
4        int n = nums.size();
5        sort(nums.begin(), nums.end());
6        vector<int> dp(n, 1);     
7        vector<int> hash(n); 
8        int maxi = 1;
9        int lastIndex = 0;
10        for(int i = 0; i < n; i++) {
11            hash[i] = i;
12            for(int j = 0; j < i; j++) {
13                if(nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
14                    dp[i] = dp[j] + 1;
15                    hash[i] = j;
16                }
17            }
18            if(dp[i] > maxi) {
19                maxi = dp[i];
20                lastIndex = i;
21            }
22        }
23        vector<int> ans;
24        ans.push_back(nums[lastIndex]);
25        while(hash[lastIndex] != lastIndex) {
26            lastIndex = hash[lastIndex];
27            ans.push_back(nums[lastIndex]);
28        }
29        reverse(ans.begin(), ans.end());
30        return ans;
31    }
32};