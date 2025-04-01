// https://atcoder.jp/contests/abc148/tasks/abc148_e
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  long long n;
  cin >> n;

  if (n % 2 != 0) {
    cout << 0 << endl;
  } else {
    long long count = 0;
    n /= 2;
    while (n > 0) {
      count += n / 5;
      n /= 5;
    }

    cout << count << endl;
  }

  return 0;
}
