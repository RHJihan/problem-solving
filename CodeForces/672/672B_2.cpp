// https://codeforces.com/contest/672/problem/B
#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (n > 26) {
    cout << -1 << '\n';
  } else {
    map<char, int> freq;

    for (int i = 0; i < n; i++) {
      freq[s[i]]++;
    }

    int count = 0;

    for (auto it = freq.begin(); it != freq.end(); it++) {
      if (it->second > 1) {
        count += it->second - 1;
      }
    }

    cout << count << '\n';
  }

  return 0;
}