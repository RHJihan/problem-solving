// https://www.hackerrank.com/challenges/weighted-uniform-string/problem

#include <iostream>
#include <set>
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;
  int qr[n];

  for (int i = 0; i < n; i++) {
    cin >> qr[i];
  }

  int freq[26];
  for (int i = 0; i < 26; i++) {
    freq[i] = 0;
  }

  for (int i = 0; i < (int)s.size(); i++) {
    int idx = (int)s[i] - 'a';
    freq[idx]++;
  }

  set<long long> datast;
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < freq[i]; j++) {
      datast.insert((i + 1L) * (j + 1L));
    }
  }

  for (int i = 0; i < n; i++) {
    if (datast.count(qr[i]) == 1) {
      cout << "Yes" << endl;
    } else
      cout << "No" << endl;
  }

  return 0;
}