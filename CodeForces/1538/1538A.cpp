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
    int n;
    cin >> n;

    int min_index = 1, max_index = 1;

    vector<int> stones(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> stones[i];
      if (stones[i] < stones[min_index]) {
        min_index = i;
      }
      if (stones[i] > stones[max_index]) {
        max_index = i;
      }
    }

    if (min_index > max_index) {
      swap(min_index, max_index);
    }

    int option1 = max_index;

    int option2 = n - min_index + 1;

    int option3 = min_index + (n - max_index + 1);

    int result = min({option1, option2, option3});

    cout << result << endl;
  }

  return 0;
}
