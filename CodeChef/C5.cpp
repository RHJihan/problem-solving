#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  int m;
  cin >> m;
  vector<int> B(m);
  for (int i = 0; i < m; i++) {
    cin >> B[i];
  }

  vector<int> dp(m, 0);
  vector<int> parent(m, -1);

  int max_len = 0;
  int idx = -1;

  for (int i = 0; i < n; ++i) {
    int current = 0;
    int last = -1;

    for (int j = 0; j < m; ++j) {
      if (A[i] == B[j]) {
        if (current + 1 > dp[j]) {
          dp[j] = current + 1;
          parent[j] = last;

          if (dp[j] > max_len) {
            max_len = dp[j];
            idx = j;
          }
        }
      } else if (B[j] < A[i]) {
        if (dp[j] > current) {
          current = dp[j];
          last = j;
        }
      }
    }
  }

  vector<int> result;
  while (idx != -1) {
    result.push_back(B[idx]);
    idx = parent[idx];
  }

  reverse(result.begin(), result.end());

  cout << max_len << endl;
  for (int i = 0; i < (int)result.size(); ++i) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}
