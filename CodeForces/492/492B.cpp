// https://codeforces.com/contest/492/problem/B
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int n, l;
  cin >> n >> l;

  vector<int> lanterns(n);

  for (int i = 0; i < n; i++) {
    cin >> lanterns[i];
  }

  sort(lanterns.begin(), lanterns.end());

  double max_gap = 0;
  for (int i = 1; i < n; i++) {
    max_gap = max(max_gap, (double)(lanterns[i] - lanterns[i - 1]));
  }

  double d = max_gap / 2;

  d = max(d, (double)lanterns[0]);
  d = max(d, (double)(l - lanterns[n - 1]));

  cout << fixed << setprecision(10) << d << endl;

  return 0;
}
