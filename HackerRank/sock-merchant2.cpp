// https://www.hackerrank.com/challenges/sock-merchant/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int size, count = 0;
  cin >> size;
  int sock[size];
  for (int i = 0; i < size; i++) {
    cin >> sock[i];
  }

  int freq[101];
  for (int i = 0; i < 101; i++) {
    freq[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    freq[sock[i]]++;
  }

  for (int i = 0; i < 101; i++) {
    if (freq[i] > 1) {
      count += freq[i] / 2;
    }
  }

  cout << count << endl;

  return 0;
}