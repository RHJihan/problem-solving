#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> count_yes(n + 1, 0);
    vector<int> count_no(n + 1, 0);

    for (int i = 0; i < n; i++) {
      count_yes[i + 1] = count_yes[i] + (s[i] == '1');
      count_no[i + 1] = count_no[i] + (s[i] == '0');
    }

    int possible = 0;

    for (int i = 1; i <= n; i++) {
      int after_yes = count_yes[n] - count_yes[i];
      int before_no = count_no[i - 1];

      if (after_yes == 0 && before_no == 0) {
        possible++;
      }
    }

    cout << possible << endl;
  }

  return 0;
}
