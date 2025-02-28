// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2877
#include <algorithm>
#include <iostream>
using namespace std;

char calc_grade(int total) {
  if (total >= 90)
    return 'A';
  if (total >= 80)
    return 'B';
  if (total >= 70)
    return 'C';
  if (total >= 60)
    return 'D';
  return 'F';
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int term1, term2, final, attendance, test1, test2, test3;
    cin >> term1 >> term2 >> final >> attendance >> test1 >> test2 >> test3;

    int best_two = (test1 + test2 + test3 - min({test1, test2, test3})) / 2;
    int total = term1 + term2 + final + attendance + best_two;
    char grade = calc_grade(total);

    cout << "Case " << i << ": " << grade << endl;
  }

  return 0;
}
