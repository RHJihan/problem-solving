// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2542

#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int result = n * 567;
    result /= 9;
    result += 7492;
    result *= 235;
    result /= 47;
    result -= 498;

    if (result < 0) {
      result *= -1;
    }

    int tenth = (result / 10) % 10;

    cout << tenth << '\n';
  }

  return 0;
}
