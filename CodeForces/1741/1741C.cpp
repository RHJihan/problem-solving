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

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int answer = n;

    for (int i = 0; i < n; i++) {
      int targetSum = 0;

      for (int j = 0; j <= i; j++) {
        targetSum += a[j];
      }

      int currentSum = 0;
      int currentLength = 0;
      int maxLength = i + 1;
      bool valid = true;

      for (int j = i + 1; j < n; j++) {
        currentSum += a[j];
        currentLength++;

        if (currentSum > targetSum) {
          valid = false;
          break;
        }

        if (currentSum == targetSum) {
          maxLength = max(maxLength, currentLength);
          currentSum = 0;
          currentLength = 0;
        }
      }

      if (valid && currentSum == 0) {
        answer = min(answer, maxLength);
      }
    }

    cout << answer << endl;
  }

  return 0;
}
