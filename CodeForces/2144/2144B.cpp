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
    int n;
    cin >> n;

    vector<int> v(n + 1), used(n + 1, 0), zero;

    for (int i = 1; i <= n; i++) {
      cin >> v[i];
      if (v[i] != 0) {
        used[v[i]] = 1;
      } else {
        zero.push_back(i);
      }
    }

    vector<int> missing;
    for (int i = 1; i <= n; i++) {
      if (!used[i])
        missing.push_back(i);
    }

    vector<bool> fixed(n + 1, false);
    for (int i = 1; i <= n; i++) {
      if (v[i] != 0 && v[i] == i) {
        fixed[i] = true;
      }
    }

    if (missing.size() == 1 && missing[0] == zero[0] && zero.size() == 1) {
      fixed[zero[0]] = true;
    }

    int left = -1, right = -1;
    for (int i = 1; i <= n; i++) {
      if (!fixed[i]) {
        left = i;
        break;
      }
    }
    
    if (left == -1) {
      cout << 0 << endl;
    } else {
      for (int i = n; i >= 1; i--) {
        if (!fixed[i]) {
          right = i;
          break;
        }
      }

      cout << right - left + 1 << endl;
    }
  }

  return 0;
}
