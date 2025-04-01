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
    long long money;
    cin >> money;

    long long total = 0;

    while (money >= 10) {
      long long spend = (money / 10) * 10;
      total += spend;
      money = money - spend + (spend / 10);
    }

    total += money;
    cout << total << endl;
  }
  return 0;
}
