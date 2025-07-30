#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<int>> dp;
vector<string> words1, words2;

int lcs(int i, int j) {
  if (i == (int)words1.size() || j == (int)words2.size())
    return 0;
  if (dp[i][j] != -1)
    return dp[i][j];

  if (words1[i] == words2[j]) {
    dp[i][j] = 1 + lcs(i + 1, j + 1);
  } else {
    dp[i][j] = max(lcs(i + 1, j), lcs(i, j + 1));
  }

  return dp[i][j];
}

vector<string> input() {
  vector<string> words;
  string line, word;
  while (getline(cin, line)) {
    if (line == "#")
      break;
    stringstream ss(line);
    while (ss >> word) {
      words.push_back(word);
    }
  }
  return words;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt", "w", stdout);
#endif

  while (true) {
    words1 = input();
    if (words1.empty())
      break; // EOF

    words2 = input();
    if (words2.empty())
      break;

    int n = (int)words1.size(), m = (int)words2.size();
    dp.assign(n + 1, vector<int>(m + 1, -1));

    lcs(0, 0);

    vector<string> result;
    int i = 0, j = 0;
    while (i < n && j < m) {
      if (words1[i] == words2[j]) {
        result.push_back(words1[i]);
        i++, j++;
      } else if (dp[i + 1][j] >= dp[i][j + 1]) {
        i++;
      } else {
        j++;
      }
    }

    for (int k = 0; k < (int)result.size(); ++k) {
      if (k > 0)
        cout << ' ';
      cout << result[k];
    }
    cout << endl;
  }

  return 0;
}
