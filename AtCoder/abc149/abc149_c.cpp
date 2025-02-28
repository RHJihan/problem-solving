// https://atcoder.jp/contests/abc149/tasks/abc149_c
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

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int X;
  cin >> X; 

  while (!isPrime(X)) { 
    X++;
  }

  cout << X << endl;
  return 0;
}
