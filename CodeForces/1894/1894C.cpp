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
    int n, k;
    cin >> n >> k;

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    int current_idx = n - 1;
    int count = 0;
    vector<int> visited(n, 0);

    bool possible = true;

    while (!visited[current_idx] && count < k) {
      visited[current_idx] = 1;

      if (b[current_idx] > n) {
        possible = false;
        break;
      }

      current_idx = (current_idx - b[current_idx] + n) % n;
      count++;
    }

    if (possible)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}
