1class Solution {
2public:
3    bool isPossibleDivide(vector<int>& nums, int k) {
4        if(nums.size() % k != 0) return false;
5        map<int,int> freq;
6        for(int x:nums) freq[x]++;
7        for(auto &it:freq){
8            int num=it.first;
9            int count=it.second;
10            if(count>0){
11                for(int i=0;i<k;i++){
12                    int curr=num + i;
13                    if(freq[curr] < count) return false;
14                    freq[curr] -= count;
15                }
16            }
17        }
18        return true;
19    }
20};