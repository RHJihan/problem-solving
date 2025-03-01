// https://codeforces.com/contest/1619/problem/C
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    long long a, s;
    cin >> a >> s;
    vector<int> b;
    bool valid = true;
    while (s > 0) {
      int last_digit_a = a % 10;
      int last_digit_s = s % 10;

      if (last_digit_a <= last_digit_s) {
        b.push_back(last_digit_s - last_digit_a);
      } else {
        s /= 10;
        int second_last_digit_s = s % 10;
        int combined_digit = second_last_digit_s * 10 + last_digit_s;

        if (combined_digit >= 10 && combined_digit <= 18) {
          b.push_back(combined_digit - last_digit_a);
        } else {
          valid = false;
          break;
        }
      }
      a /= 10;
      s /= 10;
    }

    if (a > 0 || !valid) {
      cout << -1 << endl;
      continue;
    }

    while (b[b.size() - 1] == 0) {
      b.pop_back();
    }

    if (b.empty()) {
      cout << 0 << endl;
    } else {
      for (int i = b.size() - 1; i >= 0; i--) {
        cout << b[i];
      }
      cout << endl;
    }
  }
  return 0;
}
rn 0;
}
