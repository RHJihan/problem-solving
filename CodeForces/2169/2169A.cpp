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
    int n, a;
    cin >> n >> a;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    int left = 0;
    int right = 0;

    for (int i = 0; i < n; i++) {
      if (v[i] < a) {
        left++;
      } else if (v[i] > a) {
        right++;
      }
    }

    if (left > right) {
      cout << a - 1 << endl;
    } else {
      cout << a + 1 << endl;
    }
  }

  return 0;
}