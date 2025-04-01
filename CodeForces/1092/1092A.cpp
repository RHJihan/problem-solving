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
    int n, k;
    cin >> n >> k;
    string result;
    for (int i = 0; i < n; i++) {
      result += char('a' + (i % k));
    }
    cout << result << endl;
  }

  return 0;
}