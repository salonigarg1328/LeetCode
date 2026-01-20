1class Solution {
2public:
3    int longestMountain(vector<int>& arr) {
4     int n=arr.size(), length=0;
5     int i=1;
6     for(i=1;i<n-1;i++){
7        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
8          int  left=i;
9             int right=i;
10            while(left>0 && arr[left]>arr[left-1]){
11                left--;
12            }
13            while(right<n-1 && arr[right+1]<arr[right]){
14                right++;
15               
16            }
17            length=max(length,right-left+1);
18        }
19     }
20        return length;
21    }
22    
23};