#include <algorithm>
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  string a, b;

  while (getline(cin, a) && getline(cin, b)) {
    int count_a[26] = {0};
    int count_b[26] = {0};

    for (char ch : a) {
      count_a[ch - 'a']++;
    }

    for (char ch : b) {
      count_b[ch - 'a']++;
    }

    string result = "";
    for (int i = 0; i < 26; i++) {
      int min_count = min(count_a[i], count_b[i]);
      result += string(min_count, 'a' + i);
    }

    cout << result << endl;
  }

  return 0;
}
