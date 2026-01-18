1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4       int n=nums.size();
5       int i=0,j=n-1,k=n-1;
6       vector<int> result(n);
7        while(i<=j){
8            if(abs(nums[i]) > abs(nums[j])){
9                result[k--]=nums[i]*nums[i];
10                i++;
11            }else{
12                result[k--]=nums[j]*nums[j];
13                j--;
14            }
15        }
16        return result;
17    }
18};