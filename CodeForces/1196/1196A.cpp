#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int q;
  cin >> q;
  while (q--) {
    long long sum = 0;
    for (int i = 0; i < 3; i++) {
      long long n;
      cin >> n;
      sum += n;
    }
    cout << sum / 2 << endl;
  }

  return 0;
}