// https://codeforces.com/contest/43/problem/B
#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
// freopen("output.txt","w",stdout);
#endif
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);

  map<char, int> mp;

  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] != ' ') {
      mp[s1[i]]++;
    }
  }

  for (int i = 0; i < s2.size(); i++) {
    if (s2[i] != ' ') {
      mp[s2[i]]--;
      if (mp[s2[i]] == -1) {
        cout << "NO" << '\n';
        return 0;
      }
    }
  }

  cout << "YES" << '\n';

  return 0;
}