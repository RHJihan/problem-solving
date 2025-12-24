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

    vector<long long> a(n);
    vector<long long> b(n);

    for (long long i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (long long i = 0; i < n; i++) {
      cin >> b[i];
    }

    long long minScore = 0, maxScore = 0;

    for (int i = 0; i < n; i++) {
      long long red_min = minScore - a[i];
      long long red_max = maxScore - a[i];
      long long blue_min = b[i] - maxScore;
      long long blue_max = b[i] - minScore;

      minScore = red_min;
      if (red_max < minScore)
        minScore = red_max;
      if (blue_min < minScore)
        minScore = blue_min;
      if (blue_max < minScore)
        minScore = blue_max;

      maxScore = red_min;
      if (red_max > maxScore)
        maxScore = red_max;
      if (blue_min > maxScore)
        maxScore = blue_min;
      if (blue_max > maxScore)
        maxScore = blue_max;
    }

    cout << maxScore << endl;
  }

  return 0;
}