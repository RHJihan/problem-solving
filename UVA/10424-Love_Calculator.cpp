// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1365
#include <iomanip>
#include <iostream>
using namespace std;

int sum_char(string name) {
  int sum = 0;
  for (int i = 0; i < name.size(); i++) {
    if (isalpha(name[i])) {
      sum += tolower(name[i]) - 'a' + 1;
    }
  }

  while (sum >= 10) {
    int temp = 0;
    while (sum > 0) {
      temp += sum % 10;
      sum /= 10;
    }
    sum = temp;
  }

  return sum;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  string name1, name2;

  while (getline(cin, name1) && getline(cin, name2)) {
    int num1 = sum_char(name1);
    int num2 = sum_char(name2);

    if (num1 > num2) {
      swap(num1, num2);
    }

    double result = (num1 * 100.0) / num2;

    cout << fixed << setprecision(2) << result << " %" << endl;
  }

  return 0;
}
