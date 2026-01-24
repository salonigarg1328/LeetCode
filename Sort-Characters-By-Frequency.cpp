1class Solution {
2public:
3    string frequencySort(string s) {
4      unordered_map<char,int> freq;
5       for(char ch:s){
6        freq[ch]++;
7       }
8       vector<pair<char,int>> vec(freq.begin(),freq.end());
9       sort(vec.begin(),vec.end(),[](auto &a,auto &b){
10        return a.second > b.second;
11       });
12       string result = "";
13       for(auto &p:vec){
14        result.append(p.second,p.first);
15       }
16       return result;
17
18    }
19};