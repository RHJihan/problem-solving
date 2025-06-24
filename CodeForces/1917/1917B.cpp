#include <iostream>
#include <map>
#include <set>
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

    map<char, int> pos;
    int result = 0;
    set<int> index;

    for (int i = 0; i < n; i++) {
      if (pos.find(s[i]) != pos.end()) {
        index.insert(pos[s[i]]);
        result += i + 1 - pos[s[i]];
        pos[s[i]] = i + 1;
      } else {
        pos[s[i]] = i + 1;
      }
    }
    for (int i = 1; i <= n; i++) {
      if (index.find(i) == index.end()) {
        result += n - pos[s[i - 1]] + 1;
      }
    }
    cout << result << endl;
  }

  return 0;
}
