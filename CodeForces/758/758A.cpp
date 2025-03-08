#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  vector<int> money(n);
  int rich = 0;
  for (int i = 0; i < n; i++) {
    cin >> money[i];
    if (money[i] > rich) {
      rich = money[i];
    }
  }
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += rich - money[i];
  }

  cout << sum << endl;

  return 0;
}