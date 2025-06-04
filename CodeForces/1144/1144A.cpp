#include <algorithm>
#include <iostream>
using namespace std;

bool check(string str) {
  sort(str.begin(), str.end());
  for (int i = 1; i < (int)str.size(); i++) {
    if (str[i] == str[i - 1]) {
      return false;
    }
  }

  for (int i = 1; i < (int)str.size(); i++) {
    if (str[i] - str[i - 1] != 1) {
      return false;
    }
  }

  return true;
}

int main() {
  int n;
  cin >> n;

  while (n--) {
    string s;
    cin >> s;
    if (check(s)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
