#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int x;
  cin >> x;

  cout << __builtin_popcount(x) << endl;
  
  return 0;
}