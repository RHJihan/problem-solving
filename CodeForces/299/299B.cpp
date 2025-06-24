#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, k;
  cin >> n >> k;

  string ch;
  cin >> ch;

  int max_rocks = 0;
  int current = 0;

  for (int i = 0; i < n; i++) {
    if (ch[i] == '#') {
      current++;
      max_rocks = max(max_rocks, current);
    } else {
      current = 0;
    }
  }

  if (max_rocks >= k)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;

  return 0;
}
