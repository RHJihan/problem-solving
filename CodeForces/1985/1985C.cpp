// https://codeforces.com/contest/1985/problem/C
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> numbers(n);
    vector<long long> running_sum(n);

    for (int i = 0; i < n; i++) {
      cin >> numbers[i];
    }

    running_sum[0] = numbers[0];
    for (int i = 1; i < n; i++) {
      running_sum[i] = running_sum[i - 1] + (long long)numbers[i];
    }
 
    int current_max = numbers[0];
    int count = 0;

    for (int i = 0; i < n; i++) {
      if (numbers[i] > current_max) {
        current_max = numbers[i];
      }
      if (current_max == running_sum[i] - current_max) {
        count++;
      }
    }

    cout << count << '\n';
  }

  return 0;
}
