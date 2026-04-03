1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4        unordered_map<int,int> mp;
5        mp[0]=-1;
6        int sum=0;
7        for(int i=0;i<nums.size();i++){
8            sum += nums[i];
9            if(k!=0){
10                sum %=k;
11            }
12            if(mp.find(sum)!=mp.end()){
13                if(i-mp[sum]  >= 2){
14                    return true;
15                }
16                }else{
17                    mp[sum]=i;
18                }
19            }
20            return false;
21        
22    }
23};