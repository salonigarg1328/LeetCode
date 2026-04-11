1class Solution {
2public:
3    int findLengthOfShortestSubarray(vector<int>& arr) {
4        int n=arr.size();
5        int left=0;
6        while(left<n-1 && arr[left] <= arr[left+1]) left++;
7        if(left==n-1) return 0;
8        int right=n-1;
9        while(right>0 && arr[right-1] <= arr[right]) right--;
10        int result=min(n-left-1,right);
11        int i=0,j=right;
12        while(i<=left && j<n){
13            if(arr[i] <= arr[j]){
14                result=min(result,j-i-1);
15                i++;
16            }else{
17                j++;
18            }
19        }
20        return result;
21    }
22};