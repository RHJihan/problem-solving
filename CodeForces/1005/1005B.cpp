#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  string s, t;
  cin >> s >> t;

  int s_len = (int)s.size();
  int t_len = (int)t.size();
  int common_len = 0;

  while (common_len < s_len && common_len < t_len) {
    if (s[s_len - 1 - common_len] != t[t_len - 1 - common_len]) {
      break;
    }
    common_len++;
  }

  cout << (s_len - common_len) + (t_len - common_len) << endl;

  return 0;
}
