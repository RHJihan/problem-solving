#include <iostream>
#include <vector>
using namespace std;

int check(int n, const vector<long long> &a, const vector<long long> &d, int l1) {
  if (n == 0)
    return 0;

  vector<long long> l(n);
  l[0] = l1;
  long long sum = l1;

  for (int i = 0; i < n - 1; i++) {
    l[i + 1] = d[i] - l[i];

    if (l[i + 1] < 0 || l[i + 1] > 1)
      return 0;

    sum += l[i + 1];
  }

  if (l[0] + (n - sum) == a[0])
    return 1;

  return 0;
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

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    if (n == 1) {
      if (a[0] == 1)
        cout << 2 << endl;
      else
        cout << 0 << endl;
      continue;
    }

    vector<long long> d(n - 1);
    bool ok = true;

    for (int i = 0; i < n - 1; i++) {
      d[i] = a[i + 1] - a[i] + 1;

      if (d[i] < 0 || d[i] > 2) {
        cout << 0 << endl;
        ok = false;
        break;
      }
    }

    if (!ok)
      continue;

    int result = check(n, a, d, 0) + check(n, a, d, 1);
    cout << result << endl;
  }

  return 0;
}
