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

  map<char, int> mp_s1, mp_s2;

  for (int i = 0; i < s1.size(); i++) {
    if (isalpha(s1[i]) != 0) {
      mp_s1[s1[i]]++;
    }
  }
  for (int i = 0; i < s2.size(); i++) {
    if (isalpha(s2[i]) != 0) {
      mp_s2[s2[i]]++;
    }
  }

  bool possible = true;
  for (auto it = mp_s2.begin(); it != mp_s2.end(); it++) {
    if (mp_s1[it->first] < it->second) {
      possible = false;
      break;
    }
  }

  if (possible) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }

  return 0;
}