#include <climits>
#include <iostream>
#include <string>
using namespace std;

int myAtoi(string s) {
  int i = 0;
  int n = (int)s.length();

  while (i < n && s[i] == ' ') {
    i++;
  }

  int sign = 1;
  if (i < n && (s[i] == '-' || s[i] == '+')) {
    if (s[i] == '-') {
      sign = -1;
    }
    i++;
  }

  long long result = 0;
  while (i < n && isdigit(s[i])) {
    result = result * 10 + (s[i] - '0');
    if (sign * result <= INT_MIN) {
      return INT_MIN;
    }
    if (sign * result >= INT_MAX) {
      return INT_MAX;
    }
    i++;
  }

  return sign * (int) result;
}

int main() {
  string input = "   -042";
  cout << myAtoi(input)<< endl;
  return 0;
}
