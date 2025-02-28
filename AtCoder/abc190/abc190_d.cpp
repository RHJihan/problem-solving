#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  long long n;
  cin >> n;

  long long count = 0;
  n *= 2;

  for (long long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      long long p = i;
      long long q = n / i;

      if ((q - p) % 2 == 1) {
        count++;
        if (p != q) {
          count++;
        }
      }
    }
  }
  cout << count << endl;

  return 0;
}