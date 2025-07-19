#include <iostream>
#include <queue>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, k;
  cin >> n >> k;

  priority_queue<int> powers;

  int count = 0;
  for (int i = 30; i >= 0; i--) {
    int power = 1 << i;
    while (n >= power) {
      n -= power;
      powers.push(power);
      count++;
    }
  }

  if (count > k) {
    cout << "NO" << endl;
    return 0;
  }

  while (count < k) {
    int largest = powers.top();
    powers.pop();

    if (largest == 1) {
      cout << "NO" << endl;
      return 0;
    }

    powers.push(largest / 2);
    powers.push(largest / 2);
    count++;
  }

  cout << "YES" << endl;
  vector<int> result;
  while (!powers.empty()) {
    result.push_back(powers.top());
    powers.pop();
  }

  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i];
    if (i != (int) result.size() - 1)
      cout << " ";
  }
  cout << endl;

  return 0;
}
