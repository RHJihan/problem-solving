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
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      a[i] = a[i] + (a[i] % (k + 1)) * k;
    }

    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
