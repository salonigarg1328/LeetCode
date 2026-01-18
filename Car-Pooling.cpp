1class Solution {
2public:
3    bool carPooling(vector<vector<int>>& trips, int capacity) {
4        map<int,int> mp;
5        for(auto &t:trips){
6            mp[t[1]] += t[0];
7            mp[t[2]] -= t[0];
8        }
9        int curr=0;
10        for(auto &x:mp){
11            curr += x.second;
12            if(curr > capacity) return false;
13        }
14        return true;
15    }
16};