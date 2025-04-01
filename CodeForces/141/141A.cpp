#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  string a, b, c;
  cin >> a >> b >> c;
  if ((int)c.size() != (int)a.size() + (int)b.size()) {
    cout << "NO" << endl;
    return 0;
  }

  map<char, int> mp;
  for (int i = 0; i < (int)a.size(); i++) {
    mp[a[i]]++;
  }
  for (int i = 0; i < (int)b.size(); i++) {
    mp[b[i]]++;
  }

  map<char, int> pile;
  for (int i = 0; i < (int)c.size(); i++) {
    pile[c[i]]++;
  }

  for (int i = 0; i < (int)c.size(); i++) {
    if (pile[c[i]] != mp[c[i]]) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;

  return 0;
}