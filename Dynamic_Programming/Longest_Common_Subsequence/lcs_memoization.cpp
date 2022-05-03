// Print length of Longest Common Subsequence using Recursion and Memoziation

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int lcs(string s, int i, string t, int j, vector<vector<int> >& mem) {
    if (mem[i][j] != -1)
        return mem[i][j];
    if (i >= s.size() || j >= t.size())
        return 0;
    if (s[i] == t[j])
        return mem[i][j] = 1 + lcs(s, i + 1, t, j + 1, mem);
    return mem[i][j] = max(lcs(s, i + 1, t, j, mem), lcs(s, i, t, j + 1, mem));
}

int main() {
    cout << "\n Enter two words : ";
    string s, t;
    cin >> s >> t;
    vector<vector<int> > mem(s.size() + 1, vector<int> (t.size() + 1, -1));
    cout << " The length of LCS is " << lcs(s, 0, t, 0, mem) << "\n\n";
    return 0;
}