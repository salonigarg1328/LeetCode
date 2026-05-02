1class Solution {
2public:
3    vector<int> beautifulArray(int n) {
4        vector<int> res{1};
5        while (res.size() < n) {
6            vector<int> temp;
7            for (int x : res) {
8                if (2 * x - 1 <= n)
9                    temp.push_back(2 * x - 1);
10            }
11            for (int x : res) {
12                if (2 * x <= n)
13                    temp.push_back(2 * x);
14            }
15            
16            res = temp;
17        }
18        return res;
19    }
20};