#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;
    string s;

    for (int i = 0; i < a; i++) {
      s += ('a' + (char)(i % b));
    }

    for (int i = 0; i < n; i++) {
      cout << s[i % a];
    }
    cout << endl;
  }
  return 0;
}