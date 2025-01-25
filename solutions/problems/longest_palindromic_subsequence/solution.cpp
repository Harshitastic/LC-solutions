class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        // Create a DP table to store the results of subproblems
        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Base case: Single character palindromes
        for (int i = 0; i < n; ++i)
            dp[i][i] = 1;

        // Fill the DP table
        for (int len = 2; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                if (s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j - 1] + 2; // Expand around the matched characters
                } else {
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]); // Take the maximum
                }
            }
        }

        // The result is in the top-right corner of the table
        return dp[0][n - 1];
    }
};
