#include <algorithm>
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
    long long n, m;
    cin >> n >> m;

    vector<long long> cakes(n);

    for (long long i = 0; i < n; i++) {
      cin >> cakes[i];
    }

    sort(cakes.begin(), cakes.end(), greater<long long>());

    long long total = 0;
    long long count = min(n, m);

    for (long long i = 0; i < count; i++) {
      total += cakes[i] * (m - i);
    }

    cout << total << endl;
  }

  return 0;
}
