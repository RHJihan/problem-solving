#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int n, k;
  cin >> n >> k;

  vector<int> screen;
  set<int> seen;

  for (int i = 0; i < n; i++) {
    int id;
    cin >> id;

    if (seen.find(id) != seen.end()) {
      continue;
    }

    if ((int)screen.size() == k) {
      int last = screen.back();
      screen.pop_back();
      seen.erase(last);
    }

    screen.insert(screen.begin(), id);
    seen.insert(id);
  }

  cout << screen.size() << endl;
  for (int i = 0; i < (int)screen.size(); i++) {
    cout << screen[i] << " ";
  }
  cout << endl;

  return 0;
}