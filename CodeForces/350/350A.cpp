// https://codeforces.com/contest/350/problem/A
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> correct(n);
  vector<int> wrong(m);

  int maxCorrect = INT_MIN;
  int minCorrect = INT_MAX;
  int minWrong = INT_MAX;

  for (int i = 0; i < n; i++) {
    cin >> correct[i];
    if (maxCorrect < correct[i]) {
      maxCorrect = correct[i];
    }
    if (minCorrect > correct[i]) {
      minCorrect = correct[i];
    }
  }

  for (int i = 0; i < m; i++) {
    cin >> wrong[i];
    if (minWrong > wrong[i]) {
      minWrong = wrong[i];
    }
  }

  int v = max(maxCorrect, 2 * minCorrect);

  if (v < minWrong) {
    cout << v << '\n';
  } else {
    cout << -1 << '\n';
  }

  return 0;
}
