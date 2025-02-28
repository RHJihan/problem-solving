// https://codeforces.com/contest/44/problem/A
#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif

  int n;
  cin >> n;

  map<string, set<string>> mp;

  for (int i = 0; i < n; i++) {
    string species, color;
    cin >> species >> color;
    mp[species].insert(color);
  }

  int count = 0;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    count += it->second.size();
  }

  cout << count << '\n';

  return 0;
}