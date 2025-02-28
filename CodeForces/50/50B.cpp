// https://codeforces.com/contest/50/problem/B
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif

  string s;
  cin >> s;

  int freq[36] = {0};

  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      freq[s[i] - 'a']++;
    } else if (s[i] >= '0' && s[i] <= '9') {
      freq[s[i] - '0' + 26]++;
    }
  }

  long long result = 0;
  for (int i = 0; i < 36; i++) {
    long long count = freq[i];
    result += count * count;
  }

  cout << result << '\n';

  return 0;
}
