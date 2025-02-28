// https://codeforces.com/contest/50/problem/B
#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif

  string s;
  cin >> s;

  map<char, long long> mp;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != ' ') {
      mp[s[i]]++;
    }
  }

  long long result = 0;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    result += it->second * it->second;
  }

  cout << result << '\n';

  return 0;
}
