#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  long long n;
  cin >> n;

  cout << (n * (n + 1) / 2) % 2 << endl;

  return 0;
}