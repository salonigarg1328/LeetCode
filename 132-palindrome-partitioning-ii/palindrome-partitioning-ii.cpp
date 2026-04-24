class Solution {
public:
    bool isPalindrome(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n, 0);
        for (int i = 0; i < n; i++) {
            if (isPalindrome(s, 0, i)) {
                dp[i] = 0;
            } else {
                int mini = INT_MAX;
                for (int j = 0; j < i; j++) {
                    if (isPalindrome(s, j + 1, i)) {
                        mini = min(mini, dp[j] + 1);
                    }
                }
                dp[i] = mini;
            }
        }
        return dp[n - 1];
    }
};