#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  map<pair<int, int>, int> freq;
  int always_zero = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      if (b[i] == 0) {
        always_zero++;
      }
      continue;
    }

    int num = -b[i];
    int den = a[i];
    int g = __gcd(num, den);
    num /= g;
    den /= g;

    if (den < 0) {
      num = -num;
      den = -den;
    }

    freq[{num, den}]++;
  }

  int maxZero = 0;
  for (auto &[key, val] : freq) {
    maxZero = max(maxZero, val);
  }

  cout << maxZero + always_zero << endl;
  return 0;
}
