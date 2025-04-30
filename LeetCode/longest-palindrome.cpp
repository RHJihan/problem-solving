#include <iostream>
#include <map>
using namespace std;

int longestPalindrome(string s) {
  map<char, int> count;
  for (int i = 0; i < (int)s.size(); i++) {
    count[s[i]]++;
  }

  int length = 0;
  bool has_odd = false;

  for (auto it = count.begin(); it != count.end(); it++) {
    int freq = it->second;

    length += (freq / 2) * 2;

    if (freq % 2 == 1) {
      has_odd = true;
    }
  }

  if (has_odd) {
    length += 1;
  }

  return length;
}

int main() {
  string s = "abccccdd";

  cout << longestPalindrome(s) << endl;

  return 0;
}
