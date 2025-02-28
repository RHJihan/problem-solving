// https://www.spoj.com/problems/IITKWPCN/en/
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
// freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long W, B;
    cin >> W >> B;

    if (B % 2 == 1) {
      cout << fixed << setprecision(6) << 1.0 << '\n';
    } else {
      cout << fixed << setprecision(6) << 0.0 << '\n';
    }
  }

  return 0;
}
