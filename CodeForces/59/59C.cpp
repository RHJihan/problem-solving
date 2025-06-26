#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int k;
  string s;
  cin >> k >> s;

  int n = (int)s.size();
  vector<bool> used(k, false);
  string result = s;

  for (int i = 0; i < n / 2; ++i) {
    int j = n - i - 1;

    if (result[i] == '?' && result[j] != '?') {
      result[i] = result[j];
    } else if (result[j] == '?' && result[i] != '?') {
      result[j] = result[i];
    } else if (result[i] != '?' && result[j] != '?' && result[i] != result[j]) {
      cout << "IMPOSSIBLE" << endl;
      return 0;
    }
  }

  for (char c : result) {
    if (c != '?') {
      if (c - 'a' < k)
        used[c - 'a'] = true;
      else {
        cout << "IMPOSSIBLE" << endl;
        return 0;
      }
    }
  }

  int missing = 0;
  for (int i = 0; i < k; ++i)
    if (!used[i])
      missing++;

  for (int i = 0; i <= n / 2; ++i) {
    int j = n - i - 1;

    if (result[i] == '?' && result[j] == '?') {
      char fill = 'a';
      for (int x = k - 1; x >= 0; --x) {
        if (!used[x]) {
          fill = 'a' + x;
          used[x] = true;
          missing--;
          break;
        }
      }
      result[i] = result[j] = fill;
    } else if (result[i] == '?') {
      result[i] = result[j];
    } else if (result[j] == '?') {
      result[j] = result[i];
    }
  }

  for (int i = 0; i < k; ++i) {
    if (!used[i]) {
      cout << "IMPOSSIBLE" << endl;
      return 0;
    }
  }

  cout << result << endl;

  return 0;
}
