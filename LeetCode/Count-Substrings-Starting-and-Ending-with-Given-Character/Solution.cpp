1class Solution {
2public:
3    long long countSubstrings(string s, char c) {
4        long long cnt = 0;
5
6        for (char ch : s) {
7            if (ch == c)
8                cnt++;
9        }
10
11        return cnt * (cnt + 1) / 2;
12    }
13};