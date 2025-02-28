// https://www.hackerrank.com/challenges/minimum-distances/problem

#include <climits>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int minDistance = INT_MAX;

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] == a[j]) {
        int distance = abs(j - i);
        if (distance < minDistance) {
          minDistance = distance;
        }
      }
    }
  }

  cout << ((minDistance == INT_MAX) ? -1 : minDistance) << '\n';

  return 0;
}
