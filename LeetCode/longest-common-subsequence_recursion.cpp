#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> dp;

int lcs(string &s1, string &s2, int i1, int i2) {
  if (i1 == (int)s1.size() or i2 == (int)s2.size()) {
    return 0;
  }

  if (dp[i1][i2] != -1) {
    return dp[i1][i2];
  }

  if (s1[i1] == s2[i2]) {
    dp[i1][i2] = lcs(s1, s2, i1 + 1, i2 + 1) + 1;
    return dp[i1][i2];
  }

  dp[i1][i2] = max(lcs(s1, s2, i1 + 1, i2), lcs(s1, s2, i1, i2 + 1));

  return dp[i1][i2];
}

int longestCommonSubsequence(string text1, string text2) {
  dp.resize(text1.size(), vector<int>(text2.size(), -1));
  
  return lcs(text1, text2, 0, 0);
}

int main() {
  cout << longestCommonSubsequence("abcde", "ace") << endl;

  return 0;
}
