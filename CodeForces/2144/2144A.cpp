#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "j", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }

    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      v[i] = (v[i - 1] + a[i]) % 3;
    }

    bool found = false;
    int l = 0, r = 0;

    for (int i = 1; i < n && !found; i++) {
      for (int j = i + 1; j < n; j++) {
        int s1 = v[i] % 3;
        int s2 = (v[j] - v[i] + 3) % 3;
        int s3 = (v[n] - v[j] + 3) % 3;

        if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)) {
          l = i;
          r = j;
          found = true;
          break;
        }
      }
    }

    cout << l << " " << r << endl;
  }
  return 0;
}
