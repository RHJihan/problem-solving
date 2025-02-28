// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2174
#include <iostream>
#include <map>
using namespace std;

bool isVowel(char s) {
  if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') {
    return true;
  }
  return false;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int l, n;
  cin >> l >> n;
  map<string, string> plural;

  while (l--) {
    string singular_form, plural_form;
    cin >> singular_form >> plural_form;
    plural[singular_form] = plural_form;
  }
  while (n--) {
    string input;
    cin >> input;
    auto it = plural.find(input);
    if (it != plural.end()) {
      cout << it->second << endl;
    } else if (input[input.size() - 1] == 'y' &&
               !(isVowel(input[input.size() - 2]))) {
      input[input.size() - 1] = 'i';
      cout << input << "es" << endl;
    } else if ((input[input.size() - 1] == 'o') ||
               (input[input.size() - 1] == 's') ||
               (input[input.size() - 1] == 'x')) {
      cout << input << "es" << endl;
    } else if ((input[input.size() - 1] == 'h') &&
               (input[input.size() - 2] == 'c')) {
      cout << input << "es" << endl;
    } else if ((input[input.size() - 1] == 'h') &&
               (input[input.size() - 2] == 's')) {
      cout << input << "es" << endl;
    } else {
      cout << input << "s" << endl;
    }
  }
  return 0;
}