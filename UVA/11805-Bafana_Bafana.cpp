// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2905
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  int caseCount = 1;
  while (t--) {
    int n, k, p;
    cin >> n >> k >> p;

    int last_position = (k + p - 1) % n + 1;

    cout << "Case " << caseCount << ": " << last_position << '\n';

    caseCount++;
  }

  return 0;
}
