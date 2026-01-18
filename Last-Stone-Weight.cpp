1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4       priority_queue<int> pq;
5        for(int x:stones){
6            pq.push(x);
7        }
8        while(pq.size() > 1){
9            int y=pq.top(); pq.pop();
10            int x=pq.top(); pq.pop();
11            if(y!=x){
12                pq.push(y-x);
13            }
14        }
15        return pq.empty() ? 0 : pq.top();
16    }
17};