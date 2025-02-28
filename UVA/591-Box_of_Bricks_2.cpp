// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=532
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int count = 1;

  while (true) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }

    vector<int> bricks(n);
    for (int i = 0; i < n; ++i) {
      cin >> bricks[i];
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
      total += bricks[i];
    }

    int height = total / n;

    int moves = 0;
    for (int i = 0; i < n; ++i) {
      if (bricks[i] > height) {
        moves += bricks[i] - height;
      }
    }

    cout << "Set #" << count << '\n';
    cout << "The minimum number of moves is " << moves << "." << '\n';
    cout << '\n';
    count++;
  }

  return 0;
}
