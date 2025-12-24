#include <algorithm>
#include <iostream>
#include <set>
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

    vector<long long> sticks(n);
    for (int i = 0; i < n; i++) {
      cin >> sticks[i];
    }

    vector<long long> paired;

    set<long long> left;

    for (long long x : sticks) {
      if (left.count(x)) {
        paired.push_back(x);
        paired.push_back(x);
        left.erase(x);
      } else {
        left.insert(x);
      }
    }

    vector<long long> leftover(left.begin(), left.end());
    sort(paired.begin(), paired.end());
    sort(leftover.begin(), leftover.end());

    if (paired.empty()) {
      cout << 0 << endl;
      continue;;
    }

    long long baseSum = 0;
    for (long long x : paired) {
      baseSum += x;
    }

    long long answer;

    if (paired.size() == 2)
      answer = 0;
    else
      answer = baseSum;

    long long prev = -1;

    for (long long x : leftover) {
      if (x < baseSum) {
        answer = max(answer, baseSum + x);
      }

      if (prev != -1) {
        if (x - prev < baseSum) {
          answer = max(answer, baseSum + prev + x);
        }
      }

      prev = x;
    }

    cout << answer << endl;
  }

  return 0;
}
