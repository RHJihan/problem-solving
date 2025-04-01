#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  string s;
  cin >> n >> s;

  int count = 0;

  for (int i = 0; i < n; i += 2) {
    int a_count = (s[i] == 'a') + (s[i + 1] == 'a');
    int b_count = 2 - a_count;

    if (a_count != b_count) {
      if (a_count > b_count) {
        s[i + 1] = 'b';
      } else {
        s[i] = 'a';
      }
      count++;
    }
  }

  cout << count << endl;
  cout << s << endl;

  return 0;
}
