// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=435
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
//   (void)!freopen("output.txt", "w", stdout);
#endif

  string line;
  while (getline(cin, line)) {
    int count = 0;
    bool word = false;

    for (int i = 0; i < line.size(); i++) {
      if (isalpha(line[i])) {
        if (!word) {
          count++;
          word = true;
        }
      } else {
        word = false;
      }
    }
    cout << count << endl;
  }

  return 0;
}
