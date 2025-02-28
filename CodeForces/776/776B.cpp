// https://codeforces.com/contest/776/problem/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int n;
  cin >> n;

  vector<int> color(n + 2, 1);
  int maxColor = 1;

  for (int i = 2; i <= n + 1; i++) {
    if (color[i] == 1) {
      for (int j = i * 2; j <= n + 1; j += i) {
        color[j] = 2;
        maxColor = 2;
      }
    }
  }

  cout << maxColor << endl;
  for (int i = 2; i <= n + 1; i++) {
    cout << color[i] << " ";
  }
  cout << endl;

  return 0;
}
