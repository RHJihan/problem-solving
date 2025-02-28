// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1532
#include <iostream>
#include <set>
using namespace std;

int sum(int n) {
  int sum = 0;
  while (n > 0) {
    int digit = n % 10;
    sum += digit * digit;
    n /= 10;
  }
  return sum;
}

bool happy(int n) {
  set<int> seen;
  while (n != 1 && seen.find(n) == seen.end()) {
    seen.insert(n);
    n = sum(n);
  }
  return (n == 1);
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int n;
    cin >> n;

    if (happy(n)) {
      cout << "Case #" << i << ": " << n << " is a Happy number." << endl;
    } else {
      cout << "Case #" << i << ": " << n << " is an Unhappy number." << endl;
    }
  }

  return 0;
}
