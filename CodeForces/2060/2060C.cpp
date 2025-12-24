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

    vector<int> a(n + 1);
    vector<int> count(n + 1, 0);

    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      count[a[i]]++;
    }

    long long score = 0;

    for (int i = 1; i <= n; i++) {
      int j = k - i;
      if (j >= 1 && j <= n) {
        while (count[i] > 0 && count[j] > 0) {
          if (i == j && count[i] < 2)
            break;
          count[i]--;
          count[j]--;
          score++;
        }
      }
    }

    cout << score << "\n";
  }

  return 0;
}
