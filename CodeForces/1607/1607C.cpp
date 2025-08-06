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

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
      cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    int result = numbers[0];

    for (int i = 1; i < n; i++) {
      int diff = numbers[i] - numbers[i - 1];
      if (diff > result) {
        result = diff;
      }
    }

    cout << result << endl;
  }

  return 0;
}
