#include <iostream>
using namespace std;

string toLowerCase(string s) {
  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] + 32;
    }
  }
  return s;
}

int main() {
  cout << toLowerCase("HElLO") << endl;

  return 0;
}