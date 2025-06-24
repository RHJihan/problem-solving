#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  long long t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    long long ans = 0;

    sort(arr.begin(), arr.end(), greater<long long>());

    long long red_index = 0, blue_index = n - 2;
    long long red_sum = 0, blue_sum = arr[n - 1];

    while (red_index < blue_index) {
      red_sum += arr[red_index];
      blue_sum += arr[blue_index];
      if (red_sum > blue_sum) {
        ans = 1;
      }
      red_index++;
      blue_index--;
    }

    if (ans == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
