#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, k;
  cin >> n >> k;

  int a[101];
  bool used[101] = {};
  vector<int> team;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (!used[a[i]]) {
      used[a[i]] = true;
      team.push_back(i);
    }

    if ((int)team.size() == k) {
      break;
    }
  }

  if ((int)team.size() < k) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    for (int idx : team) {
      cout << idx + 1 << " ";
    }
    cout << endl;
  }

  return 0;
}
