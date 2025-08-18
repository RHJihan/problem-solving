#include <algorithm> 
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long n, m;
    cin >> n >> m;

    long long g = __gcd(n, m);
    n /= g;
    m /= g;

    long long temp = m;
    int power_of_two_count = 0;
    while (temp % 2 == 0) {
      temp /= 2;
      power_of_two_count++;
    }

    if (temp != 1) {
      cout << -1 << endl;
      continue;
    }

    long long operations = 0;

    for (int i = 0; i <= 31; i++) {
      if ((n >> i) & 1) {
        if (power_of_two_count > i) {

          operations += (1LL << i) * ((1LL << (power_of_two_count - i)) - 1);
        }
      }
    }

    cout << operations * g << endl;
  }

  return 0;
}
