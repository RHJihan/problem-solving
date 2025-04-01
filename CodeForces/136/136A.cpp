#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 1; i <= n; i++) {
    int f;
    cin >> f;
    mp[f] = i;
  }
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it->second << " ";
  }

  return 0;
}