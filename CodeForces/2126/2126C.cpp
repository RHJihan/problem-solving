#include <algorithm>
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
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
      cin >> h[i];
    }
    int initial_height = h[k - 1];
    sort(h.begin(), h.end());

    auto it = find(h.begin(), h.end(), initial_height);
    int initial_idx = it - h.begin();

    int time = initial_height;
    bool possible = true;

    for (int i = initial_idx; i < n; i++) {
      if (h[i + 1] - h[i] < time) {
        cout << i << " " << h[i + 1] << " " << h[i] << " " << time << endl;
        possible = false;
        break;
      }
      time++;
    }
    
    if (possible) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}