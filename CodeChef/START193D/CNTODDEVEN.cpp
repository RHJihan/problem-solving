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

    int odd = 0, even = 0;

    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        if (i % 2 == 0)
          even++;
        else
          odd++;
      }
    }

    cout << odd << " " << even << endl;
  }

  return 0;
}
