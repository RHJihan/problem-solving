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
    int n, m;
    string a, b, c;

    cin >> n >> a >> m >> b >> c;

    string result = a;

    for (int i = 0; i < m; i++) {
      if (c[i] != 'V') {
        result = result + b[i];
      } else {
        result = b[i] + result;
      }
    }

    cout << result << endl;
  }

  return 0;
}
