#include <iostream>
#include <string>
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
    string result = string(k, '1') + string(n - k, '0');
    cout << result << endl;
  }

  return 0;
}
