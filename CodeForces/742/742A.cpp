// https : // codeforces.com/problemset/problem/742/A
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  long long n;
  cin >> n;

  if (n == 0) {
    cout << 1 << endl;
    return 0;
  }

  int last_digits[] = {8, 4, 2, 6};
  int index = (n - 1) % 4;

  cout << last_digits[index] << endl;

  return 0;
}
