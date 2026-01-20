1class Solution {
2public:
3    int longestMountain(vector<int>& arr) {
4        int n=arr.size();
5        if(n<3) return 0;
6        vector<int> up(n,0), down(n,0);
7        for(int i=1;i<n;i++){
8            if(arr[i] > arr[i-1]){
9                up[i]=up[i-1]+1;
10            }
11        }
12        for(int i=n-2;i>=0;i--){
13            if(arr[i] > arr[i+1]){
14                down[i]=down[i+1]+1;
15            }
16        }
17        int longest=0;
18        for(int i=1;i<n-1;i++){
19            if(up[i]>0 && down[i]>0){
20                longest=max(longest,up[i]+down[i]+1);
21            }
22        }
23        return longest;
24    }
25};