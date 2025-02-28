// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1998
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int N, M;

  while (cin >> N) {
    vector<int> prices(N);

    for (int i = 0; i < N; ++i) {
      cin >> prices[i];
    }

    cin >> M;

    int best_i = -1, best_j = -1, diff = 1000002;

    for (int i = 0; i < N - 1; i++) {
      for (int j = i + 1; j < N; j++) {
        if (prices[i] + prices[j] == M) {
          if (abs(prices[i] - prices[j]) < diff) {
            best_i = prices[i];
            best_j = prices[j];
            diff = abs(best_i - best_j);
          }
        }
      }
    }

    cout << "Peter should buy books whose prices are " << min(best_i, best_j)
         << " and " << max(best_i, best_j) << ".\n\n";
  }

  return 0;
}
