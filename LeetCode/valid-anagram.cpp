#include <iostream>
using namespace std;

bool isAnagram(string s, string t) {
  if (s.size() != t.size()) {
    return false;
  }

  int count[26] = {0};

  for (int i = 0; i < (int)s.size(); i++) {
    count[s[i] - 'a']++;
    count[t[i] - 'a']--;
  }

  for (int i = 0; i < 26; i++) {
    if (count[i] != 0) {
      return false;
    }
  }

  return true;
}

int main() {
  string s = "anagram";
  string t = "nagaram";

  if (isAnagram(s, t)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  return 0;
}
