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

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (sock[i] == sock[j] && (sock[i] > 0 && sock[j] > 0)) {
        count++;
        sock[i] = 0;
        sock[j] = 0;
      }
    }
  }

  cout << count << endl;

  return 0;
}