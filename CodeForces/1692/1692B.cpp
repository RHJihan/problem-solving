// https://codeforces.com/contest/1692/problem/B
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> num(n);
    set<int> unique;

    for (int i = 0; i < n; i++) {
      cin >> num[i];
      unique.insert(num[i]);
    }

    int max_length = (int)unique.size();

    if ((n - max_length) % 2 == 1) {
      cout << max_length - 1 << endl;
    } else {
      cout << max_length << endl;
    }
  }

  return 0;
}
