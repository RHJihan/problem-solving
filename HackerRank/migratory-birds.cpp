// https://www.hackerrank.com/challenges/migratory-birds/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, b_max_type, count = 0, b_max_freq = INT_MIN;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int freq[6];
  for (int i = 0; i <= 5; i++) {
    freq[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }


  for (int i = 5; i >= 0; i--) {
    if (freq[i] >= b_max_freq) {
      b_max_type = i;
      b_max_freq = freq[i];
    }
  }

  cout << b_max_type << endl;

  return 0;
}