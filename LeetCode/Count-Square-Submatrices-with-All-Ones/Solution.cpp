1class Solution {
2public:
3    int countSquares(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        int total = 0;
7        for (int i = 0; i < n; i++) {
8            for (int j = 0; j < m; j++) {
9                if (matrix[i][j] == 1 && i > 0 && j > 0) {
10                    matrix[i][j] = 1 + min({
11                        matrix[i-1][j],     
12                        matrix[i][j-1],    
13                        matrix[i-1][j-1]    
14                    });
15                }
16                total += matrix[i][j];
17            }
18        }
19        return total;
20    }
21};