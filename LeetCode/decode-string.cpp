#include <iostream>
#include <string>
using namespace std;

string decode(string &s, int &i) {
  string result = "";
  int num = 0;

  while (i < (int)s.size()) {
    if (isdigit(s[i])) {
      num = num * 10 + (s[i] - '0');
      i++;
    } else if (s[i] == '[') {
      i++;
      string decoded = decode(s, i);
      for (int j = 0; j < num; j++) {
        result += decoded;
      }
      num = 0;
    } else if (s[i] == ']') {
      i++;
      return result;
    } else {
      result += s[i];
      i++;
    }
  }

  return result;
}

string decodeString(string s) {
  int i = 0;
  return decode(s, i);
}

int main() {
  cout << decodeString("2[abc]3[cd]ef") << endl;

  return 0;
}
