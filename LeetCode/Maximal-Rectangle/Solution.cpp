1class Solution {
2public:
3    int largestrect(vector<int> &histo) {
4        stack<int> st;
5        int maxarea = 0;
6        int n = histo.size();
7        for (int i = 0; i <= n; i++) {
8            while (!st.empty() && (i == n || histo[st.top()] >= histo[i])) {
9                int height = histo[st.top()];
10                st.pop();
11                int width;
12                if (st.empty())
13                    width = i;
14                else
15                    width = i - st.top() - 1;
16                maxarea = max(maxarea, height * width);
17            }
18            st.push(i);
19        }
20        return maxarea;
21    }
22    int maximalRectangle(vector<vector<char>>& matrix) {
23        int n = matrix.size();
24        int m = matrix[0].size();
25        vector<int> height(m, 0);
26        int maxarea = 0;
27        for (int i = 0; i < n; i++) {
28            for (int j = 0; j < m; j++) {
29                if (matrix[i][j] == '1')
30                    height[j]++;
31                else
32                    height[j] = 0;
33            }
34            int area = largestrect(height);
35            maxarea = max(maxarea, area);
36        }
37        return maxarea;
38    }
39};