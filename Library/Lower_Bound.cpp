#include <iostream>
#include <vector>
using namespace std;

int lower_bound(vector<int> &num, int key) {
  int low = 0, high = (int)num.size() - 1;
  while (high - low > 1) {
    int mid = high + (low - high) / 2;
    if (num[mid] < key) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  if (num[low] >= key) {
    return low;
  }
  if (num[high] >= key) {
    return high;
  }
  return -1;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  vector<int> num(n);

  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }

  int key;
  cin >> key;

  int idx = lower_bound(num, key);
  cout << idx << " " << num[idx] << endl;

  return 0;
}
