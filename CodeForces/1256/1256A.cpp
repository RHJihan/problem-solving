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
    int a, b, n, s;
    cin >> a >> b >> n >> s;

    int max_n_coins = min(a, s / n);
    int remaining = s - (max_n_coins * n);

    if (remaining <= b) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}