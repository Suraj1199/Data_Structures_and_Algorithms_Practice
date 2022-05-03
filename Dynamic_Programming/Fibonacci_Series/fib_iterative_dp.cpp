// Print Nth Fibonacci Number (Iterative + Tabulation)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "\n Value of N = ";
    int n;
    cin >> n;
    vector<long> dp(n + 1, -1);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; ++i)
        dp[i] = dp[i - 1] + dp[i - 2];
    cout << " The " << n << "th Fibonnaci number is " << dp[n] << "\n\n";
    return 0;
}