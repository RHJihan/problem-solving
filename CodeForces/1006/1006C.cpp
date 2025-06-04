#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> d(n);

  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }

  int left = 0;
  int right = n - 1;
  long long sum_left = 0;
  long long sum_right = 0;
  long long max_sum = 0;

  while (left <= right) {
    if (sum_left < sum_right) {
      sum_left += d[left];
      left++;
    } else if (sum_right < sum_left) {
      sum_right += d[right];
      right--;
    } else {
      max_sum = sum_left;
      sum_left += d[left];
      left++;
    }
  }

  if (sum_left == sum_right) {
    max_sum = sum_left;
  }

  cout << max_sum << endl;

  return 0;
}
