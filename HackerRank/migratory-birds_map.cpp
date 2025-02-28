// https://www.hackerrank.com/challenges/migratory-birds/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<int, int> freq;

  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    freq[input]++;
  }

  int b_max_type = 0, b_max_freq = 0;

  for (map<int, int>::iterator it = freq.begin(); it != freq.end(); it++) {
    if (it->second > b_max_freq ||
        (it->second == b_max_freq && it->first < b_max_type)) {
      b_max_type = it->first;
      b_max_freq = it->second;
    }
  }

  cout << b_max_type << '\n';

  return 0;
}
