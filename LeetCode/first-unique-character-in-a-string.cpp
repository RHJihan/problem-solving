#include <iostream>
#include <map>
using namespace std;

int firstUniqChar(string s) {
  map<char, int> freq;

  for (int i = 0; i < (int)s.size(); i++) {
    freq[s[i]]++;
  }

  for (int i = 0; i < (int) s.size(); i++) {
    if (freq[s[i]] == 1) {
      return i;
    }
  }

  return -1;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  cout << firstUniqChar("leetcode") << endl;
  return 0;
}