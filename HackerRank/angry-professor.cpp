// https://www.hackerrank.com/challenges/angry-professor/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int q, total, threshold;
  cin >> q;

  while (q--) {
    int count = 0;
    cin >> total >> threshold;
    int temp;

    for (int j = 0; j < total; j++) {
      cin >> temp;
      if (temp <= 0) {
        count++;
      }
    }
    cout << ((count >= threshold) ? "NO" : "YES") << '\n';
  }
  return 0;
}