// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1163
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  map<char, char> mp;
  string s = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

  for (int i = 2; i < s.size(); i++) {
    mp[s[i]] = s[i - 2];
  }
  string line;
  getline(cin, line);

  for (int i = 0; i < line.size(); i++) {
    line[i] = tolower(line[i]);
    if (mp.find(line[i]) != mp.end()) {
      cout << mp[line[i]];
    } else {
      cout << line[i];
    }
  }
  cout << endl;

  return 0;
}
