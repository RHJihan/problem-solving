#include <iostream>
#include <vector>
using namespace std;

bool is_sorted(vector<int> &a) {
  for (int i = 0; i < (int)a.size() - 1; i++) {
    if (a[i] > a[i + 1]) {
      return false;
    }
  }
  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> p(m);
    vector<bool> swap_possible(n - 1, false);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
      cin >> p[i];
      swap_possible[p[i] - 1] = true;
    }

    bool sorted = false;
    while (!sorted) {
      sorted = true;
      for (int i = 0; i < n - 1; i++) {
        if (swap_possible[i] && a[i] > a[i + 1]) {
          swap(a[i], a[i + 1]);
          sorted = false;
        }
      }
    }

    if (is_sorted(a)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
