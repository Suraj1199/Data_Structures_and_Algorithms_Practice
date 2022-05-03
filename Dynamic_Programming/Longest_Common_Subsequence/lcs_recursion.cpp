// Print length of Longest Common Subsequence using Recursion Only

#include <iostream>
#include <string>
using namespace std;

int lcs(string s, int i, string t, int j) {
    if (i >= s.size() || j >= t.size())
        return 0;
    if (s[i] == t[j])
        return 1 + lcs(s, i + 1, t, j + 1);
    return max(lcs(s, i + 1, t, j), lcs(s, i, t, j + 1));
}

int main() {
    cout << "\n Enter two words : ";
    string s, t;
    cin >> s >> t;
    // vector<long> dp(n + 1, -1);
    // dp[0] = 0, dp[1] = 1;
    // for (int i = 2; i <= n; ++i)
    //     dp[i] = dp[i - 1] + dp[i - 2];
    cout << " The length of LCS is " << lcs(s, 0, t, 0) << "\n\n";
    return 0;
}