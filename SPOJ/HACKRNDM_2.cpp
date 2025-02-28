// https://www.spoj.com/problems/HACKRNDM/en/
#include <iostream>
#include <set>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif
  int n, k;
  cin >> n >> k;

  set<int> numbers;
  int count = 0;
  
  for (int i = 0; i < n; i++) {
    int current;
    cin >> current;
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
