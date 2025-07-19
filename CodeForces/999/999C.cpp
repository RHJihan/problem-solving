#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  vector<int> v(26, 0);

  int remaining = k;
  for (int i = 0; i < 26; i++) {
    char ch = 'a' + i;
    for (char c : s) {
      if (c == ch && remaining > 0) {
        v[i]++;
        remaining--;
      }
    }
    if (remaining == 0)
      break;
  }

  string result = "";
  for (char c : s) {
    int index = c - 'a';
    if (v[index] > 0) {
      v[index]--;
    } else {
      result += c;
    }
  }

  cout << result << endl;

  return 0;
}
