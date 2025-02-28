// https://codeforces.com/contest/822/problem/A
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int A, B;
  cin >> A >> B;

  int min_val = min(A, B);
  
  long long result = 1;
  for (int i = 1; i <= min_val; i++) {
    result *= i;
  }
  cout << result << endl;

  return 0;
}
