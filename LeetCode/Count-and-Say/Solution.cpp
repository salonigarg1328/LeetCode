1class Solution {
2public:
3    string countAndSay(int n) {
4        if (n == 1) return "1";
5
6        string say = countAndSay(n - 1);
7        string result = "";
8
9        for (int i = 0; i < say.length(); i++) {
10            char ch = say[i];
11            int cnt = 1;
12
13            while (i + 1 < say.length() && say[i] == say[i + 1]) {
14                cnt++;
15                i++;
16            }
17
18            result += to_string(cnt) + string(1, ch);
19        }
20
21        return result;
22    }
23};