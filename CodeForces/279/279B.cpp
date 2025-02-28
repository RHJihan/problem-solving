// https://codeforces.com/contest/279/problem/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int n, t;
  cin >> n >> t;

  vector<int> books(n);
  for (int i = 0; i < n; i++) {
    cin >> books[i];
  }

  int j = 0, sum = 0, max_read = 0;

  for (int i = 0; i < n; i++) {
    sum += books[i];

    while (sum > t) {
      sum -= books[j];
      j++;
    }

    max_read = max(max_read, i - j + 1);
  }

  cout << max_read << endl;
  return 0;
}
