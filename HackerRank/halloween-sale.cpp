// https://www.hackerrank.com/challenges/halloween-sale/problem

#include <iostream>
using namespace std;

int main() {
  int p, d, m, s, count = 0, total = 0;
  cin >> p >> d >> m >> s;
  for (int i = p; i >= m; i -= d) {
    total += i;
    if (total > s) {
      break;
    }
    count++;
  }
  if (total + m < s) {
    count += (s - total) / m;
  }

  cout << count << '\n';

  return 0;
}