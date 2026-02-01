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
    int n;
    cin >> n;

    vector<int> result(n + 1);

    int left = 1, right = n;

    for (int i = 1; i <= n; i++) {
      if (i % 2 == 1) {
        result[i] = left++;
      } else {
        result[i] = right--;
      }
    }

    reverse(result.begin(), result.end());

    for (int i = 0; i < n; i++) {
      cout << result[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
