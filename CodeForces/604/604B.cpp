// https://codeforces.com/contest/604/problem/B
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int n, k;
  cin >> n >> k;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  if (n <= k)
    cout << arr[n - 1] << endl;
  else {
    int max_s = arr[n - 1];
    int total_pair = n - k;
    for (int i = 0; i < total_pair; i++) {
      int tmp = arr[i] + arr[((2 * total_pair) - i) - 1];
      max_s = max(max_s, tmp);
    }

    cout << max_s << endl;
  }

  return 0;
}
