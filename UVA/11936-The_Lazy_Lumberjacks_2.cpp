// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3087
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  (void)!freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
      cout << "OK" << '\n';
    } else {
      cout << "Wrong!!" << '\n';
    }
  }

  return 0;
}