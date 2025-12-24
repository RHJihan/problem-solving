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
    string n;
    cin >> n;

    long long sum_of_digits = 0;
    int count_of_2 = 0;
    int count_of_3 = 0;

    for (char c : n) {
      int digit = c - '0';
      sum_of_digits += digit;
      if (digit == 2)
        count_of_2++;
      if (digit == 3)
        count_of_3++;
    }

    int remainder_needed = (int)(9 - (sum_of_digits % 9)) % 9;

    if (remainder_needed == 0) {
      cout << "YES" << endl;
      continue;
    }

    bool possible = false;

    for (int y = 0; y <= count_of_3 && !possible; y++) {
      for (int x = 0; x <= count_of_2; x++) {
        int added = (2 * x + 6 * y) % 9;
        if (added == remainder_needed) {
          possible = true;
          break;
        }
      }
    }

    if (possible)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
