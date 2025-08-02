#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n, k, m;
    cin >> n >> k >> m;

    string s;
    cin >> s;

    vector<int> seen(k, 0);

    int unique = 0;
    string result;

    for (int i = 0; i < m; i++) {
      int idx = s[i] - 'a';

      if (seen[idx] == 0) {
        unique++;
      }

      seen[idx]++;

      if (unique == k) {

        result.push_back(s[i]);

        fill(seen.begin(), seen.end(), 0);
        unique = 0;
      }
    }

    if ((int)result.size() >= n) {
      cout << "YES" << endl;
      continue;
    }

    for (int i = 0; i < k; i++) {
      if (seen[i] == 0) {

        result.push_back((char)('a' + i));
        break;
      }
    }

    while ((int)result.size() < n) {
      result.push_back('a');
    }

    cout << "NO" << endl;
    cout << result << endl;
  }

  return 0;
}
