#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  int a[100];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int count = 0;

  for (int i = 1; i < n - 1; i++) {
    if (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1) {
      count++;
      a[i + 1] = 0;
    }
  }

  cout << count << endl;

  return 0;
}
