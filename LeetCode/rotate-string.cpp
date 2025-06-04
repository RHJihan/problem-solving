#include <iostream>
using namespace std;

bool rotateString(string s, string goal) {
  int n = (int)s.size();

  for (int i = 0; i < n; i++) {
    if (s == goal) {
      return true;
    }

    char current = s[0];
    s.erase(0, 1);
    s += current;
  }

  return false;
}

int main() {

  cout << rotateString("abcde", "cdeab") << endl;

  return 0;
}