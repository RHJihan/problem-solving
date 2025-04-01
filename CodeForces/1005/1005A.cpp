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

  vector<int> steps(n);
  vector<int> stairways;

  for (int i = 0; i < n; i++) {
    cin >> steps[i];
  }

  int count = 1;
  for (int i = 1; i < n; i++) {
    if (steps[i] == 1) {
      count++;
      stairways.push_back(steps[i - 1]);
    }
  }

  stairways.push_back(steps[n - 1]);

  cout << count << endl;
  for (int i = 0; i < (int)stairways.size(); i++) {
    cout << stairways[i] << " ";
  }

  return 0;
}
