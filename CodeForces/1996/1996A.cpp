#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int count = 0;

    while (n >= 4) {
      int tmp = n % 4;
      count += n / 4;
      n = tmp;
    }

    count += n / 2;

    cout << count << endl;
  }

  return 0;
}
