// https://www.hackerrank.com/challenges/find-digits/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int number, count = 0;
    cin >> number;
    int frag = number;

    while (frag != 0) {
      int digit = frag % 10;
      if (digit != 0 && number % digit == 0) {
        count++;
      }
      frag /= 10;
    }

    cout << count << endl;
  }
  return 0;
}