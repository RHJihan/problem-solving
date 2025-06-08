#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  string t;

  cin >> n >> t;

  string result = "";
  int index = 0;
  int step = 1;

  while (index < n) {
    result += t[index];
    index += step;
    step++;
  }

  cout << result << endl;

  return 0;
}
