#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i = 0, j = n - 1;
    while (i < j && s[i] != s[j]) {
      i++;
      j--;
    }

    cout << (j - i + 1) << endl;
  }

  return 0;
}