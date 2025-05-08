#include <iostream>
#include <set>
using namespace std;

int lengthOfLongestSubstring(string s) {
  set<char> seen;
  int left = 0, right = 0;
  int max_len = 0;

  while (right < (int)s.size()) {
    if (seen.find(s[right]) == seen.end()) {
      seen.insert(s[right]);
      max_len = max(max_len, right - left + 1);
      right++;
    } else {
      seen.erase(s[left]);
      left++;
    }
  }

  return max_len;
}

int main() {
  string s = "pwwkew";

  cout << lengthOfLongestSubstring(s) << endl;

  return 0;
}
