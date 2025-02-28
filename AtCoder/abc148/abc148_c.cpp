// https://atcoder.jp/contests/abc148/tasks/abc148_c
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  for (int i = min(a, b); i > 0; i--) { 
    if (a % i == 0 && b % i == 0) {
      return i; 
    }
  }
  return 1; 
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int A, B;
  cin >> A >> B;

  cout << (1LL * A * B) / gcd(A, B) << endl;

  return 0;
}
