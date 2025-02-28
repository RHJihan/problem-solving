// https://www.hackerrank.com/challenges/strong-password/problem?isFullScreen=true

#include <iostream>
using namespace std;

int main() {
  int n;
  string pass;
  cin >> n >> pass;

  bool num = false, upper = false, lower = false, spec = false;

  string special = "!@#$%^&*()-+";

  for (int i = 0; i < n; i++) {
    if ((int)pass[i] >= 48 && (int)pass[i] <= 57) {
      num = true; // number
    }

    if ((int)pass[i] >= 97 && (int)pass[i] <= 122) {
      lower = true; // lower case
    }
    if ((int)pass[i] >= 65 && (int)pass[i] <= 90) {
      upper = true; // upper case
    }

    for (int j = 0; j < (int)special.size(); j++) {
      if (pass[i] == special[j]) {
        spec = true; // special
      }
    }
  }
  if (n >= 6)
    cout << 4 - ((int)num + (int)upper + (int)lower + (int)spec);
  else if ((6 - n) <= (4 - ((int)num + (int)upper + (int)lower + (int)spec)))
    cout << 4 - ((int)num + (int)upper + (int)lower + (int)spec);
  else
    cout << 6 - n;
  return 0;
}