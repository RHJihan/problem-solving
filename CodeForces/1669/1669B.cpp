// https://codeforces.com/contest/1669/problem/B
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int freq[n + 1] = {0}; 

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      freq[a]++;
    }

    bool found = false;
    for (int i = 1; i <= n; i++) { 
      if (freq[i] >= 3) {
        cout << i << endl;
        found = true;
        break;
      }
    }

    if (!found) {
      cout << -1 << endl;
    }
  }

  return 0;
}