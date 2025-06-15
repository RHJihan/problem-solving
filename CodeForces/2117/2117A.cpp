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
    int n, x;
    cin >> n >> x;
    int first_closed_index = -1;
    int last_closed_index = -1;
    bool found_first_closed = false;
    vector<int> doors(n);
    for (int i = 0; i < n; i++) {
      cin >> doors[i];
      if (doors[i] == 1) {
        if (!found_first_closed) {
          first_closed_index = i;
          found_first_closed = true;
        } else {
          last_closed_index = i;
        }
      }
    }

    if (x >= (last_closed_index - first_closed_index) + 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}