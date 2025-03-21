#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int q;
  cin >> q;

  while (q--) {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
      int input;
      cin >> input;
      sum += input;
    }

    cout << (sum + n - 1) / n << endl;
  }

  return 0;
}
