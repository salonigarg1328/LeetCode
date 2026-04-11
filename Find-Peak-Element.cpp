1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int l=0,h=nums.size()-1;
5        while(l<h){
6            int mid=l+(h-l)/2;
7            if(nums[mid] < nums[mid+1])
8              l=mid+1;
9              else
10                h=mid;
11        }
12        return l;
13    }
14};