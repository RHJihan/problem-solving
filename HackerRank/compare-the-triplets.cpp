// https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true

#include <iostream>
using namespace std;

int main() {
  int a[3], b[3], pa = 0, pb = 0;
  for (int i = 0; i < 3; i++)
    cin >> a[i];
  for (int i = 0; i < 3; i++)
    cin >> b[i];

  for (int i = 0; i < 3; i++) {
    if (a[i] > b[i])
      pa++;
    if (a[i] < b[i])
      pb++;
    if (a[i] == b[i])
      continue;
  }
  cout << pa << " " << pb << endl;

  return 0;
}