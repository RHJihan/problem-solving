#include <deque>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, k;
  cin >> n >> k;

  deque<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int solved = 0;
  while (!a.empty() && a.front() <= k) {
    a.pop_front();
    solved++;
  }

  while (!a.empty() && a.back() <= k) {
    a.pop_back();
    solved++;
  }

  cout << solved << endl;

  return 0;
}
