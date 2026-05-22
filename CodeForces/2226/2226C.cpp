#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool canAchieveMex(int mid, vector<int> &a) {
  int n = (int) a.size();

  vector<bool> targetSatisfied(mid, false);

  vector<int> leftover;

  for (int i = 0; i < n; i++) {
    int val = a[i];
    if (val < mid && !targetSatisfied[val]) {

      targetSatisfied[val] = true;
    } else {

      leftover.push_back(val);
    }
  }

  vector<int> missing;
  for (int i = 0; i < mid; i++) {
    if (!targetSatisfied[i]) {
      missing.push_back(i);
    }
  }

  sort(leftover.begin(), leftover.end());
  sort(missing.begin(), missing.end());

  int coveredCount = 0;

  for (int i = 0; i < (int)leftover.size(); i++) {
    if (coveredCount == (int)missing.size())
      break;

    int targetNeeded = missing[coveredCount];
    int minValueRequired = 2 * targetNeeded + 1;

    if (leftover[i] >= minValueRequired) {
      coveredCount++;
    }
  }

  return coveredCount == (int)missing.size();
}

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
    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a.begin(), a.end());

    int low = 0, high = n;
    int answer = 0;

    while (low <= high) {
      int mid = low + (high - low) / 2;

      if (canAchieveMex(mid, a)) {
        answer = mid;
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }

    cout << answer << endl;
  }
  return 0;
}