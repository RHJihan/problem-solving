// https://www.spoj.com/problems/HACKRNDM/en/
#include <iostream>
#include <set>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt", "w", stdout);
#endif
  int n, k;
  cin >> n >> k;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  set<int> numbers;
  int count = 0;

  for (int i = 0; i < n; i++) {
    int current = arr[i];
    if (numbers.find(current - k) != numbers.end()) {
      count++;
    }
    if (numbers.find(current + k) != numbers.end()) {
      count++;
    }
    numbers.insert(current);
  }

  cout << count << '\n';

  return 0;
}
