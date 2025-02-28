// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem

#include <bits/stdc++.h>
using namespace std;

int reverse(int number) {
  int reversed = 0, mod;

  while (number != 0) {
    mod = number % 10;
    reversed = reversed * 10 + mod;
    number /= 10;
  }
  return reversed;
}

int main() {
  int start, end, div, count = 0;
  cin >> start >> end >> div;

  for (int i = start; i <= end; i++) {
    if (abs(i - reverse(i)) % div == 0) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}