// Print length of Longest Common Subsequence using Iterative Tabulation

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cout << "\n Enter two words : ";
    string s, t;
    cin >> s >> t;
    int m = s.size(), n = t.size();
    vector<vector<int> > dp(m + 1, vector<int> (n + 1, 0));
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s[i - 1] == t[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << " The length of LCS is " << dp[m][n] << "\n\n";
    return 0;
}