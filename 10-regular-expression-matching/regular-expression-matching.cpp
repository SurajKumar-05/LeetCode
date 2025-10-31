class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        vector<vector<bool>> dp(n+1, vector<bool>(m+1, false));
        dp[n][m] = true;  
        
        for (int j = m - 2; j >= 0; j--) {
            if (p[j+1] == '*')
                dp[n][j] = dp[n][j+2];
        }

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                bool firstMatch = (p[j] == s[i] || p[j] == '.');
                if (j+1 < m && p[j+1] == '*') {
                    // skip '*' or use '*' to match one more char
                    dp[i][j] = dp[i][j+2] || ( firstMatch && dp[i+1][j] );
                } else {
                    dp[i][j] = firstMatch && dp[i+1][j+1];
                }
            }
        }
        return dp[0][0];
    }
};
