#include <iostream>
#include <vector>
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

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int sign = 1;

    for (int i = 0; i < n; i++) {
      if (arr[i] == 0) {
        sign = 0;
      } else if (arr[i] < 0) {
        sign *= -1;
      }
    }

    if (sign == -1 || sign == 0) {
      cout << 0 << endl;
    } else {

      cout << 1 << endl;
      cout << 1 << " " << 0 << endl;
    }
  }

  return 0;
}
