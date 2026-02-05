1class Solution {
2public:
3    int findContentChildren(vector<int>& g, vector<int>& s) {
4        sort(g.begin(),g.end());
5        sort(s.begin(),s.end());
6        int i=0;
7        int j=0;
8        int cnt=0;
9        while(i<g.size() && j<s.size()){
10             if(s[j]>=g[i]){
11                cnt++;
12                i++;
13             }
14             j++;
15        }
16        return cnt;
17    }
18};