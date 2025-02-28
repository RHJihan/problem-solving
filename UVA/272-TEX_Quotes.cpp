// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt", "w", stdout);
#endif
  string line;
  bool start = true;

  while (getline(cin, line)) {
    for (int i = 0; i < line.length(); i++) {
      if (line[i] == '\"') {
        if (start) {
          cout << "``";
        } else {
          cout << "''";
        }
        start = !start;
      } else {
        cout << line[i];
      }
    }
    cout << '\n';
  }

  return 0;
}
