// https://codeforces.com/contest/584/problem/D
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
  if (n == 2) {
    return true;
  }
  if (n < 2 || n % 2 == 0) {
    return false;
  }

  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int n;
  cin >> n;

  if (isPrime(n)) {
    cout << 1 << endl << n << endl;
    return 0;
  }

  int rest;
  int a;

  for (int i = n - 1; i >= 2; i--) {
    if (isPrime(i)) {
      a = i;
      rest = n - i;
      break;
    }
  }

  if (isPrime(rest)) {
    cout << 2 << endl << a << " " << rest << endl;
    return 0;
  }

  for (int i = 2; i < rest; i++) {
    int tmp = rest - i;
    if (isPrime(i) && isPrime(tmp)) {
      cout << 3 << endl << a << " " << i << " " << tmp << endl;
      break;
    }
  }

  return 0;
}
