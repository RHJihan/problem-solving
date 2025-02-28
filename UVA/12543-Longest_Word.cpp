// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3988
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  string long_word;
  int s_size = 0;
  while (true) {
    string s;
    cin >> s;

    if (s == "E-N-D") {
      break;
    }

    string word = "";
    for (int i = 0; i < s.size(); i++) {
      char current = tolower(s[i]);
      if ((current > 96 && current < 123) || current == '-') {
        word += current;
      }
    }

    if (word.size() > s_size) {
      s_size = word.size();
      long_word = word;
    }
  }

  cout << long_word << '\n';

  return 0;
}