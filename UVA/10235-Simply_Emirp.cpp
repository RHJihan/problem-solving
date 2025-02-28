// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1176
#include <iostream>
using namespace std;

bool isPrime(int n) {
  if (n < 2)
    return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int reverseNumber(int n) {
  int reversed = 0;
  while (n > 0) {
    reversed = reversed * 10 + (n % 10);
    n /= 10;
  }
  return reversed;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
//   (void)!freopen("output.txt", "w", stdout);
#endif
  int N;
  while (cin >> N) { 
    if (!isPrime(N)) {
      cout << N << " is not prime." << endl;
    } else {
      int reversedN = reverseNumber(N);
      if (reversedN != N && isPrime(reversedN)) {
        cout << N << " is emirp." << endl;
      } else {
        cout << N << " is prime." << endl;
      }
    }
  }
  return 0;
}