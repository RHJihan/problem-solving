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

    bool mce = false;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == k) {
        mce = true;
      }
    }

    mce ? cout << "YES" << endl : cout << "NO" << endl;
  }
  
  return 0;
}