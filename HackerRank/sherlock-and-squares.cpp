// https://www.hackerrank.com/challenges/sherlock-and-squares/problem

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int q;
  cin >> q;
  while (q--) {
    int a, b;
    cin >> a >> b;

    int low = (int)ceil(sqrt(a));
    int high = (int)floor(sqrt(b));

    cout << high - low + 1 << '\n';
  }
  return 0;
}