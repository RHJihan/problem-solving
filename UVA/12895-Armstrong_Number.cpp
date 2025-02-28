// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4760
#include <cmath>
#include <iostream>
using namespace std;

bool armstrong(int num) {
  int total_digit = 0;
  int temp = num;

  while (temp > 0) {
    temp /= 10;
    total_digit++;
  }

  int sum = 0;
  temp = num;

  while (temp > 0) {
    int digit = temp % 10;
    sum += pow(digit, total_digit);
    temp /= 10;
  }

  return (sum == num);
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    if (armstrong(n)) {
      cout << "Armstrong" << endl;
    } else {
      cout << "Not Armstrong" << endl;
    }
  }

  return 0;
}
