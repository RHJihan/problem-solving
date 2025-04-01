#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  string s;
  cin >> s;

  bool first_check = true;
  for (int i = 0; i < n; i++) {
    if (s[i] != '4' && s[i] != '7') {
      first_check = false;
      break;
    }
  }

  if (first_check) {
    int first_half_sum = 0, second_half_sum = 0;
    for (int i = 0; i < n / 2; i++) {
      first_half_sum += s[i] - '0';
      second_half_sum += s[i + n / 2] - '0';
    }

    if (first_half_sum == second_half_sum) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
