1class Solution {
2public:
3    string intToRoman(int num) {
4        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9,5,4, 1
5        };
6
7        vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL",
8            "X", "IX", "V", "IV", "I"
9        };
10
11        string ans = "";
12
13        for (int i = 0; i < values.size(); i++) {
14            while (num >= values[i]) {
15                ans += symbols[i];
16                num -= values[i];
17            }
18        }
19
20        return ans;
21    }
22};