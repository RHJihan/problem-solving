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
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    vector<int> max_suffix(n);
    max_suffix[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      max_suffix[i] = max(max_suffix[i + 1], a[i]);
    }

    vector<int> mix_prefix(n);
    mix_prefix[0] = a[0];
    for (int i = 1; i < n; i++) {
      mix_prefix[i] = min(mix_prefix[i - 1], a[i]);
    }

    string result(n, '0');

    for (int i = 0; i < n; i++) {
      bool max_possible = (a[i] == max_suffix[i]);
      bool min_possible = (a[i] == mix_prefix[i]);
      if (max_possible || min_possible) {
        result[i] = '1';
      }
    }

    cout << result << endl;
  }

  return 0;
}