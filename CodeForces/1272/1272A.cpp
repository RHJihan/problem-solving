#include <climits>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int q;
  cin >> q;

  while (q--) {
    int a, b, c;
    cin >> a >> b >> c;

    int min_distance = INT_MAX;

    for (int i = -1; i <= 1; i++) {
      for (int j = -1; j <= 1; j++) {
        for (int k = -1; k <= 1; k++) {
          int new_a = a + i;
          int new_b = b + j;
          int new_c = c + k;

          int distance = abs(new_a - new_b) + abs(new_a - new_c) + abs(new_b - new_c);

          min_distance = min(min_distance, distance);
        }
      }
    }

    cout << min_distance << endl;
  }

  return 0;
}
