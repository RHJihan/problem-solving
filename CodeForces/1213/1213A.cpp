#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  int even = 0, odd = 0;

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if (tmp % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }
  cout << min(even, odd) << endl;

  return 0;
}
