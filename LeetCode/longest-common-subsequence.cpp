#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int longestCommonSubsequence(string text1, string text2) {
  int len1 = (int)text1.size(), len2 = (int)text2.size();
  int cur_val, pre_val;

  vector<int> dp(len2 + 1, 0);
  
  for (int i = 1; i <= len1; i++) {
    pre_val = 0;
    for (int j = 1; j <= len2; j++) {
      cur_val = dp[j];
      dp[j] = max({dp[j], dp[j - 1], pre_val + (text1[i - 1] == text2[j - 1])});
      pre_val = cur_val;
    }
  }
  return dp[len2];
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  cout << longestCommonSubsequence("abcde", "ace") << endl;

  return 0;
}
