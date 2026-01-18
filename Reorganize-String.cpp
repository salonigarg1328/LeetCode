1class Solution {
2public:
3    string reorganizeString(string s) {
4     unordered_map<char,int> freq;
5     for(char c:s){
6        freq[c]++;
7     }   
8     priority_queue<pair<int,char>> pq;
9     for(auto &it:freq){
10        pq.push({it.second,it.first});
11     }
12     string result="";
13     pair<int,char> prev={0,'#'};
14     while(!pq.empty()){
15        auto cur=pq.top();
16        pq.pop();
17        result.push_back(cur.second);
18        cur.first--;
19        if(prev.first > 0){
20            pq.push(prev);
21        }
22        prev=cur;
23     }
24     if(result.size()!=s.size()) return "";
25     return result;
26    }
27};