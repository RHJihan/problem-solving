#include <iostream>
using namespace std;

int countKeyChanges(string s) {
  int changes = 0;
  char last = (char)tolower(s[0]);

  for (int i = 1; i < (int)s.size(); i++) {
    char current = (char)tolower(s[i]);
    if (current != last) {
      changes++;
      last = current;
    }
  }

  return changes;
}

int main() {
  cout << countKeyChanges("aAbBcC") << endl;

  return 0;
}