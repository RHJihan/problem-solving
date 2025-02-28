// https://www.hackerrank.com/challenges/taum-and-bday/problem

#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long b, w, bc, wc, z;
    long total;
    cin >> b >> w >> bc >> wc >> z;
    if (bc + z < wc) {
      total = bc * b + (bc + z) * w;
    } else if (wc + z < bc) {
      total = (wc + z) * b + wc * w;
    } else {
      total = bc * b + wc * w;
    }

    cout << total << '\n';
  }
  return 0;
}