// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3051
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int n, P, Q;
    cin >> n >> P >> Q;

    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
      cin >> weights[i];
    }

    int count = 0;
    int totalWeight = 0;

    for (int i = 0; i < n; i++) {
      if (count + 1 > P)
        break;
      if (totalWeight + weights[i] > Q)
        break;

      count++;
      totalWeight += weights[i];
    }

    cout << "Case " << t << ": " << count << endl;
  }

  return 0;
}
