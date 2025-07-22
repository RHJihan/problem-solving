#include <iostream>
#include <vector>
using namespace std;

string s1, s2;
vector<vector<string>> dp;

string lcs(int i, int j) {
  if (i == (int)s1.size() || j == (int)s2.size()) {
    return "";
  }

  if (dp[i][j] != "#") {
    return dp[i][j];
  }

  string res;

  if (s1[i] == s2[j]) {
    res = s1[i] + lcs(i + 1, j + 1);
  } else {
    string a = lcs(i + 1, j);
    string b = lcs(i, j + 1);

    if (a.size() > b.size()) {
      res = a;
    } else if (b.size() > a.size()) {
      res = b;
    } else {
      res = min(a, b);
    }
  }

  return dp[i][j] = res;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;

  cin >> t;
  cin.ignore();

  for (int case_count = 1; case_count <= t; ++case_count) {
    cin.ignore();
    cin >> s1 >> s2;

    int n = (int)s1.size(), m = (int)s2.size();
    dp.assign(n, vector<string>(m, "#"));

    string ans = lcs(0, 0);

    cout << "Case " << case_count << ": ";
    if (ans.empty()) {
      cout << ":(" << endl;
    } else {
      cout << ans << endl;
    }
  }

  return 0;
}
