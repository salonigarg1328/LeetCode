1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int n=nums.size();
5        int currsum=0,start=0;
6        int minlength=INT_MAX;
7        for(int i=0;i<n;i++){
8            currsum += nums[i];
9            while(currsum>=target){
10                minlength=min(minlength,i-start+1);
11                currsum -= nums[start];
12                start++;
13            }
14        
15        }
16        return (minlength==INT_MAX) ? 0 : minlength;
17    }
18};