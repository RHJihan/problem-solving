// https://codeforces.com/contest/1676/problem/C
#include <iostream>
#include <vector>
using namespace std;

int find_diff(string a, string b, int len) {
  int diff = 0;
  for (int i = 0; i < len; i++) {
    diff += abs(a[i] - b[i]);
  }
  return diff;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
      cin >> words[i];
    }
    int min_diff = __INT_MAX__;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        int current_diff = find_diff(words[i], words[j], m);
        if (current_diff < min_diff) {
          min_diff = current_diff;
        }
      }
    }
    cout << min_diff << endl;
  }

  return 0;
}