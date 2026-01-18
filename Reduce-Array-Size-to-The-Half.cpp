1class Solution {
2public:
3    int minSetSize(vector<int>& arr) {
4        unordered_map<int , int> freq;
5        for(int x:arr){
6            freq[x]++;
7        }
8        priority_queue<int> pq;
9        for(auto it:freq){
10            pq.push(it.second);
11        }
12        int removed=0;
13        int count=0;
14        int half=arr.size()/2;
15        while(removed < half){
16            removed += pq.top();
17            pq.pop();
18            count++;
19        }
20        return count;
21    }
22
23};