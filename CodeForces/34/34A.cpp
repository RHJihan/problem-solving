#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int diff = INT_MAX;
  int first_index = -1, second_index = -1;

  for (int i = 0; i < n; i++) {
    int j = (i + 1) % n;
    int current_diff = abs(arr[i] - arr[j]);

    if (current_diff < diff) {
      diff = current_diff;
      first_index = i + 1;
      second_index = j + 1; 
    }
  }

  cout << first_index << " " << second_index << endl;

  return 0;
}
