#include <iostream>
using namespace std;

class Solution {
public:
  bool isSubsequence(string s, string t) {
    int i = 0;
    int j = 0;

    while (i < (int)s.size() && j < (int)t.size()) {
      if (s[i] == t[j]) {
        i++;
      }
      j++;
      if (i == (int)s.size()) {
        return true;
      }
    }
    return false;
  }
};

int main() {
  Solution sol;
  cout << sol.isSubsequence("abc", "ahbgdc") << endl;
  return 0;
}