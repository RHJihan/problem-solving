#include <iostream>
#include <map>
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
    cin >> n >> k;

    vector<int> S(n), T(n);

    for (int i = 0; i < n; i++) {
      cin >> S[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> T[i];
    }

    map<int, int> group_s, group_t;

    for (int i = 0; i < n; i++) {
      int rem_s = S[i] % k;
      int rem_t = T[i] % k;

      int group_id_s, group_id_t;

      if (rem_s == 0) {
        group_id_s = 0;
      } else if (k % 2 == 0 && rem_s == k / 2) {
        group_id_s = k / 2;
      } else {
        group_id_s = min(rem_s, k - rem_s);
      }

      if (rem_t == 0) {
        group_id_t = 0;
      } else if (k % 2 == 0 && rem_t == k / 2) {
        group_id_t = k / 2;
      } else {
        group_id_t = min(rem_t, k - rem_t);
      }

      group_s[group_id_s]++;
      group_t[group_id_t]++;
    }

    bool possible = (group_s == group_t);

    cout << (possible ? "YES" : "NO") << endl;
  }

  return 0;
}