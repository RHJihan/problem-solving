#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, q;
  cin >> n >> q;

  vector<long long> a(n + 1);
  vector<int> last_update(n + 1, 0);

  long long sum = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  int version = 0;
  long long global_value = 0;

  while (q--) {
    int t;
    cin >> t;

    if (t == 1) {
      int i;
      long long x;
      cin >> i >> x;

      if (last_update[i] != version) {
        a[i] = global_value;
        last_update[i] = version;
      }

      sum -= a[i];
      a[i] = x;
      sum += a[i];

    } else if (t == 2) {
      long long x;
      cin >> x;

      global_value = x;
      version++;
      sum = x * n;
    }

    cout << sum << endl;
  }

  return 0;
}
