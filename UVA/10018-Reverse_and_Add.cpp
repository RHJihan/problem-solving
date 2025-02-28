// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=959
#include <iostream>
using namespace std;

long long reverse(long long n) {
  long long reversed_number = 0, remainder;
  while (n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
  return reversed_number;
}

bool palindrome_check(long long n) {
  long long reversed_number = reverse(n);
  if (reversed_number == n) {
    return true;
  }
  return false;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;

  while (n--) {
    long long p;
    cin >> p;

    int count = 0;

    do {
      long long reversed = reverse(p);
      p += reversed;
      count++;
    } while (!palindrome_check(p));

    cout << count << " " << p << '\n';
  }

  return 0;
}
