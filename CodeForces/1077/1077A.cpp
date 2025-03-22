#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long a, b, k;
    cin >> a >> b >> k;

    long long position = (k / 2) * (a - b) + (k % 2) * a;

    cout << position << endl;
  }
  
  return 0;
}
