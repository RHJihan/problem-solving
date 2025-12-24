#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    int freq[26] = {0};
    for (char c : s) {
      freq[c - 'a']++;
    }

    int printed = 0;
    while (printed < n) {
      for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
          cout << char('a' + i);
          freq[i]--;
          printed++;
        }
      }
    }

    cout << endl;
  }

  return 0;
}
