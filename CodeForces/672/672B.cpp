// https://codeforces.com/contest/672/problem/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (n > 26) {
    cout << -1 << '\n';
    return 0;
  }

  vector<int> freq(26, 0);
  int count = 0;

  for (int i = 0; i < n; i++) {
    freq[s[i] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if (freq[i] > 1) {
      count += freq[i] - 1;
    }
  }

  cout << count << '\n';
  
  return 0;
}
