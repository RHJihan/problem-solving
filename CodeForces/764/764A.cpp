#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int n, m, z;
  cin >> n >> m >> z;

  int count = 0;

  for (int i = 1; i <= z; i++) {
    if (i % n == 0 && i % m == 0) {
      count++;
    }
  }
  cout << count << endl;

  return 0;
}
