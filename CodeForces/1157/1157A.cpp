#include <iostream>
#include <set>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  set<int> reachable;

  while (reachable.find(n) == reachable.end()) {
    reachable.insert(n);
    int x = n + 1;

    while (x % 10 == 0) {
      x /= 10;
    }
    n = x;
  }

  cout << reachable.size() << endl;

  return 0;
}
