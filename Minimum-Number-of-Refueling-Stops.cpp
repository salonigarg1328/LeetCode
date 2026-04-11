1class Solution {
2public:
3    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
4        priority_queue<int> maxHeap;
5        int fuel=startFuel, stops=0, prev=0;
6        stations.push_back({target,0});
7        for(auto &s:stations){
8            int pos=s[0],gas=s[1];
9            fuel -= (pos-prev);
10            while(fuel <0 && !maxHeap.empty()){
11                fuel += maxHeap.top();
12                maxHeap.pop();
13                stops++;
14            }
15            if(fuel < 0) return -1;
16            maxHeap.push(gas);
17            prev=pos;
18        }
19        return stops;
20    }
21};