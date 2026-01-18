1class Solution {
2public:
3    int wiggleMaxLength(vector<int>& nums) {
4        int n=nums.size();
5        if(n<2) return n;
6        int up=1,down=1;
7        for(int i=1;i<n;i++){
8            if(nums[i] > nums[i-1]){
9                up=down+1;
10            }else if(nums[i] < nums[i-1]){
11                down=up+1;
12            }
13        }
14        return  max(up,down);
15    }
16};