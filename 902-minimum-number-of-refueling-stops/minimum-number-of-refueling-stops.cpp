class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> maxHeap;
        int fuel=startFuel, stops=0, prev=0;
        stations.push_back({target,0});
        for(auto &s:stations){
            int pos=s[0],gas=s[1];
            fuel -= (pos-prev);
            while(fuel <0 && !maxHeap.empty()){
                fuel += maxHeap.top();
                maxHeap.pop();
                stops++;
            }
            if(fuel < 0) return -1;
            maxHeap.push(gas);
            prev=pos;
        }
        return stops;
    }
};