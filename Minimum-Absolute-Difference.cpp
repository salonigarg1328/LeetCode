1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4        sort(arr.begin(),arr.end());
5        int mindiff=INT_MAX;
6        int n=arr.size();
7        vector<vector<int>> ans;
8        for(int i=1;i<n;i++){
9            mindiff=min(mindiff,arr[i]-arr[i-1]);
10        }
11        for(int i=1;i<n;i++){
12            if((arr[i]-arr[i-1]) == mindiff){
13                ans.push_back({arr[i-1],arr[i]});
14            }
15        }
16        return ans;
17    }
18};