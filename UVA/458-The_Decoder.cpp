// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=399
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  string line;
  while (getline(cin, line)) {

    string decodedText;
    for (int i = 0; i < line.size(); i++) {
      decodedText += line[i] - 7;
    }

    cout << decodedText << endl;
  }

  return 0;
}
