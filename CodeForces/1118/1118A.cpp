#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int q;
  cin >> q;
  while (q--) {
    long long n, a, b;
    cin >> n >> a >> b;

    if (2 * a <= b) {
      cout << n * a << endl;
    } else {
      cout << (n / 2) * b + (n % 2) * a << '\n';
    }
  }

  return 0;
}
