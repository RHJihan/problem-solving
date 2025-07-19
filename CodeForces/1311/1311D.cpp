#include <climits>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int A, B, C;
    cin >> A >> B >> C;

    int best_A, best_B, best_C;
    int min_operations = INT_MAX;

    for (int i = 1; i <= 10000; i++) {
      for (int j = i; j <= 20000; j += i) {

        int k = (C / j) * j;
        if (C > j) {
          if (abs(C - k) > abs(C - (k + j)))
            k += j;
        } else {
          k = j;
        }

        int operations = abs(A - i) + abs(B - j) + abs(C - k);

        if (operations < min_operations) {
          min_operations = operations;
          best_A = i;
          best_B = j;
          best_C = k;
        }
      }
    }

    cout << min_operations << endl;
    cout << best_A << " " << best_B << " " << best_C << endl;
  }

  return 0;
}
