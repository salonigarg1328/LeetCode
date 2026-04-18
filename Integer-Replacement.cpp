1class Solution {
2public:
3    int integerReplacement(int n) {
4        long long num = n; 
5        int steps = 0;
6        while (num != 1) {
7            if (num % 2 == 0) {
8                num /= 2;
9            } else {
10                if (num == 3 || num % 4 == 1) {
11                    num -= 1;
12                } else {
13                    num += 1;
14                }
15            }
16            steps++;
17        }
18        return steps;
19    }
20};