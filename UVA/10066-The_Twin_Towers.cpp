#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int longestCommonSubsequence(vector<int> N1, vector<int> N2) {
  int len1 = (int)N1.size(), len2 = (int)N2.size();
  int cur_val, pre_val;

  vector<int> dp(len2 + 1, 0);

  for (int i = 1; i <= len1; i++) {
    pre_val = 0;
    for (int j = 1; j <= len2; j++) {
      cur_val = dp[j];
      dp[j] = max({dp[j], dp[j - 1], pre_val + (N1[i - 1] == N2[j - 1])});
      pre_val = cur_val;
    }
  }
  return dp[len2];
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt","w", stdout);
#endif

  int count = 1;

  while (true) {
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0) {
      break;
    }
    vector<int> N1(a), N2(b);

    for (int i = 0; i < a; i++) {
      cin >> N1[i];
    }
    for (int i = 0; i < b; i++) {
      cin >> N2[i];
    }

    cout << "Twin Towers #" << count++ << endl;
    cout << "Number of Tiles : " << longestCommonSubsequence(N1, N2) << endl;
    cout << endl;
  }

  return 0;
}