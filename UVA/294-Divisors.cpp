// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=230
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int L, U;
    cin >> L >> U;

    int maxDivisors = 0;
    int numWithMax = L;

    for (int i = L; i <= U; ++i) {
      int divisors = 0;
      int sqrtI = sqrt(i);

      for (int j = 1; j <= sqrtI; ++j) {
        if (i % j == 0) {
          divisors += 2;
          if (j == i / j) {
            divisors--;
          }
        }
      }

      if (divisors > maxDivisors ||
          (divisors == maxDivisors && i < numWithMax)) {
        maxDivisors = divisors;
        numWithMax = i;
      }
    }

    cout << "Between " << L << " and " << U << ", " << numWithMax
         << " has a maximum of " << maxDivisors << " divisors." << '\n';
  }

  return 0;
}
