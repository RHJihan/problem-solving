#include <iostream>
using namespace std;

bool backspaceCompare(string s, string t) {
  string resultS = "";
  string resultT = "";

  for (int i = 0; i < (int)s.size(); i++) {
    char ch = s[i];
    if (ch == '#') {
      if (!resultS.empty()) {
        resultS.pop_back();
      }
    } else {
      resultS.push_back(ch);
    }
  }

  for (int i = 0; i < (int)t.size(); i++) {
    char ch = t[i];
    if (ch == '#') {
      if (!resultT.empty()) {
        resultT.pop_back();
      }
    } else {
      resultT.push_back(ch);
    }
  }

  return resultS == resultT;
}

int main() {
  cout << backspaceCompare("ab#c", "ad#c") << endl;
  cout << backspaceCompare("ab##", "c#d#") << endl;
  cout << backspaceCompare("a#c", "b") << endl;
  return 0;
}
