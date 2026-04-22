1class Solution {
2public:
3    static bool comp(string &s1, string &s2){
4        return s1.size() < s2.size();
5    }
6
7    bool checkpossible(string &s1, string &s2){
8        if(s1.size() != s2.size() + 1) return false;
9
10        int first = 0, second = 0;
11
12        while(first < s1.size()){
13            if(second < s2.size() && s1[first] == s2[second]){
14                first++;
15                second++;
16            } else {
17                first++;
18            }
19        }
20
21        return second == s2.size();
22    }
23
24    int longestStrChain(vector<string>& words) {
25        int n = words.size();
26        sort(words.begin(), words.end(), comp);
27
28        vector<int> dp(n, 1);
29        int maxi = 1;
30
31        for(int i = 0; i < n; i++){
32            for(int prev = 0; prev < i; prev++){
33                if(checkpossible(words[i], words[prev]) && dp[prev] + 1 > dp[i]){
34                    dp[i] = dp[prev] + 1;
35                }
36            }
37            maxi = max(maxi, dp[i]);
38        }
39
40        return maxi;
41    }
42};