// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=431
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  vector<string> lines;
  string line;
  int maxLength = 0;

  while (getline(cin, line)) {
    lines.push_back(line);
    maxLength = max(maxLength, (int)line.size());
  }

  int rightmost = lines.size();

  for (int i = 0; i < maxLength; i++) {
    for (int j = rightmost - 1; j >= 0; j--) {
      if (i < lines[j].size()) {
        cout << lines[j][i];
      } else {
        cout << ' ';
      }
    }
    cout << endl;
  }

  return 0;
}
