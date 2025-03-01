// https://codeforces.com/contest/1692
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
    int a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < 3; i++) {
      int z;
      cin >> z;
      if (z > a) {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}