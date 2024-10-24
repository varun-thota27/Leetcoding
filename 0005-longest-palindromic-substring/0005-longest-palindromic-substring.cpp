class Solution {
public:

    int solve(string &a, int i, int j, vector<vector<int>>& dp)
    {
        if (i > j) return 0;
        if (i == j) return 1;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (a[i] == a[j]) {
            int innerLength = j - i - 1;
            if (innerLength == solve(a, i + 1, j - 1, dp)) {
                dp[i][j] = 2 + innerLength;
                return dp[i][j];
            }
        }

        dp[i][j] = 0;
        return dp[i][j];
    }

    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";

        vector<vector<int>> dp(n, vector<int>(n, -1));

        int maxLength = 1;
        int start = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (solve(s, i, j, dp) > maxLength) {
                    maxLength = j - i + 1;
                    start = i;
                }
            }
        }

        return s.substr(start, maxLength);
    }
};
