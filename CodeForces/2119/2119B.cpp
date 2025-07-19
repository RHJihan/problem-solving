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
    int n;
    cin >> n;

    long long px, py, qx, qy;
    cin >> px >> py >> qx >> qy;

    vector<long long> a(n);
    long long total_distance = 0;
    long long max_step = 0;

    for (long long i = 0; i < n; ++i) {
      cin >> a[i];
      total_distance += a[i];
      max_step = max(max_step, a[i]);
    }

    long long dx = qx - px;
    long long dy = qy - py;
    long long req = dx * dx + dy * dy;

    if (total_distance * total_distance < req) {
      cout << "NO" << endl;
      continue;
    }
    if (max_step * 2 <= total_distance) {
      cout << "YES" << endl;
    } else {

      long long rest = 2 * max_step - total_distance;
      if (rest * rest <= req) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}
