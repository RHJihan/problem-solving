#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;

  vector<bool> covered(m + 1, false);

  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    for (int j = l; j <= r; j++) {
      covered[j] = true;
    }
  }

  vector<int> uncovered;
  for (int i = 1; i <= m; i++) {
    if (!covered[i]) {
      uncovered.push_back(i);
    }
  }

  cout << uncovered.size() << endl;
  for (int i = 0; i < (int)uncovered.size(); i++) {
    cout << uncovered[i] << " ";
  }

  return 0;
}
