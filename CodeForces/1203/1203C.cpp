#include <algorithm>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  long long d;

  cin >> n;
  cin >> d;

  for (int i = 1; i < n; i++) {
    long long num;
    cin >> num;
    d = __gcd(d, num);
  }

  int count = 0;
  for (int i = 1; (long long)i * i <= d; i++) {
    if (d % i == 0) {
      count++;
      if (i != d / i) {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}
