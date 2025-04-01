#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  bool good = false;
  for (int i = 0; i < n; i++) {
    int before, after;
    string s;
    cin >> s >> before >> after;
    if (before >= 2400 && after > before) {
      good = true;
      break;
    }
  }

  cout << (good ? "YES" : "NO") << endl;

  return 0;
}