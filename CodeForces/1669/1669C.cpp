// https://codeforces.com/contest/1669/problem/C
#include <iostream>
#include <vector>
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

    vector<int> odd_index, even_index;

    for (int i = 1; i <= n; i++) {
      int a;
      cin >> a;
      if (i % 2 != 0) {
        odd_index.push_back(a);
      } else {
        even_index.push_back(a);
      }
    }

    int count_even = 0, count_odd = 0;

    for (int i = 0; i < odd_index.size(); i++) {
      if (odd_index[i] % 2 == 0) {
        count_even++;
      } else {
        count_odd++;
      }
    }

    bool pass_odd_index = false;
    if ((count_even == 0 && count_odd != 0) ||
        (count_even != 0 && count_odd == 0)) {
      pass_odd_index = true;
    }

    count_even = 0, count_odd = 0;

    for (int i = 0; i < even_index.size(); i++) {
      if (even_index[i] % 2 == 0) {
        count_even++;
      } else {
        count_odd++;
      }
    }

    bool pass_even_index = false;
    if ((count_even == 0 && count_odd != 0) ||
        (count_even != 0 && count_odd == 0)) {
      pass_even_index = true;
    }

    if (pass_even_index && pass_odd_index) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}}

  return 0;
}