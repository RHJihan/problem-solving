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

    string a, b;
    cin >> a >> b;

    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i += 2) {
      if (a[i] == '1')
        count1++;
    }
    for (int i = 1; i < n; i += 2) {
      if (a[i] == '1')
        count2++;
    }
    for (int i = 0; i < n; i += 2) {
      if (b[i] == '1')
        count2++;
    }
    for (int i = 1; i < n; i += 2) {
      if (b[i] == '1')
        count1++;
    }

    if (count1 <= n / 2 && count2 <= (n + 1) / 2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}