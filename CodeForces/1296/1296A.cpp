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

    int arr[2001];
    int sum = 0, odd_count = 0, even_count = 0;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
      if (arr[i] % 2 == 0) {
        even_count++;
      } else {
        odd_count++;
      }
    }

    if (sum % 2 == 1) {
      cout << "YES" << endl;
    } else {
      if (odd_count > 0 && even_count > 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}
