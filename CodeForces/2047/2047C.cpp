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

    vector<long long> row1(n);
    vector<long long> row2(n);

    for (int i = 0; i < n; i++) {
      cin >> row1[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> row2[i];
    }

    long long total_max = 0;
    long long min_of_columns = -1000000000;

    for (int i = 0; i < n; i++) {
      long long a = row1[i];
      long long b = row2[i];

      total_max += max(a, b);

      min_of_columns = max(min_of_columns, min(a, b));
    }

    cout << total_max + min_of_columns << endl;
  }

  return 0;
}
