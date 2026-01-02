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
    string s;
    cin >> s;

    bool has2026 = s.find("2026") != string::npos;
    bool has2025 = s.find("2025") != string::npos;

    if (has2026) {
      cout << 0 << endl;
      continue;
    }

    if (has2025) {
      cout << 1 << endl;
      continue;
    }

    cout << 0 << endl;
  }
  return 0;
}
