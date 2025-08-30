#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    string s;
    cin >> n >> k >> s;

    int current = 0;
    bool possible = true;

    for (int i = 0; i < (int)s.size(); i++) {
      if (s[i] == '1') {
        if (++current >= k) {
          possible = false;
          break;
        }
      } else {
        current = 0;
      }
    }

    if (!possible) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;

      vector<int> result(n);
      vector<int> zeros;
      vector<int> ones;

      for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
          zeros.push_back(i);
        } else {
          ones.push_back(i);
        }
      }

      int number = n;

      for (int i = 0; i < (int)zeros.size(); i++) {
        result[zeros[i]] = number--;
      }

      for (int i = 0; i < (int)ones.size(); i++) {
        result[ones[i]] = number--;
      }

      for (int i = 0; i < n; i++) {
        if (i) {
          cout << " ";
        }
        cout << result[i];
      }
      cout << endl;
    }
  }

  return 0;
}