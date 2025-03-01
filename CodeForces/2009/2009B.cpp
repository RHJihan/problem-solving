// https://codeforces.com/contest/2009/problem/B

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> result;

    for (int i = 0; i < n; ++i) {
      string row;
      cin >> row;

      for (int j = 0; j < 4; ++j) {
        if (row[j] == '#') {
          result.push_back(j + 1);
          break;
        }
      }
    }

    for (int i = n - 1; i >= 0; --i) {
      cout << result[i] << " ";
    }
    cout << '\n';
  }

  return 0;
}
