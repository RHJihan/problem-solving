#include <algorithm>
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
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<pair<int, int>> cans(n);
  for (int i = 0; i < n; i++) {
    cans[i] = {a[i], i + 1};
  }

  sort(cans.rbegin(), cans.rend());

  int total = 0;
  vector<int> order;
  for (int i = 0; i < n; i++) {
    int current = cans[i].first * i + 1;
    total += current;
    order.push_back(cans[i].second);
  }

  cout << total << endl;
  for (int i = 0; i < n; i++) {
    cout << order[i] << " ";
  }
  cout << endl;
  return 0;
}
