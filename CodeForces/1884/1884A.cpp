#include <iostream>
using namespace std;

int SumOfDigits(int n) {
  int sum = 0;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int x, k;
    cin >> x >> k;

    while (SumOfDigits(x) % k != 0) {
      x++;
    }
    cout << x << endl;
  }

  return 0;
}
