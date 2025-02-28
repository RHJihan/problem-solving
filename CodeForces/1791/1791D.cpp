#include <iostream>
#include <map>
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

    map<char, int> right_freq, left_freq;

    for (int i = 0; i < n; i++) {
      right_freq[s[i]]++;
    }

    int max_f = 0;
    int left_unique = 0, right_unique = (int)right_freq.size();

    for (int i = 0; i < n; i++) {
      char c = s[i];

      left_freq[c]++;
      if (left_freq[c] == 1) {
        left_unique++;
      }

      right_freq[c]--;
      if (right_freq[c] == 0) {
        right_unique--;
      }

      max_f = max(max_f, left_unique + right_unique);
    }

    cout << max_f << endl;
  }

  return 0;
}
