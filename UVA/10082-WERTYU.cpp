// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1023
#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  string original = "1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
  string shifted = "`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,./";

  map<char, char> map;
  for (int i = 0; i < original.size(); i++) {
    map[original[i]] = shifted[i];
  }

  string line;
  while (getline(cin, line)) {
    for (int i = 0; i < line.size(); i++) {
      auto it = map.find(line[i]);
      if (it != map.end()) {
        cout << it->second;
      } else {
        cout << line[i];
      }
    }

    cout << endl;
  }

  return 0;
}
