#include <iostream>
using namespace std;

bool possible(long long n) {
  while (n % 2 == 0) {
    n /= 2;
  }
  return n == 1;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    if (possible(n)) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }

  return 0;
}
