// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1311
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
#endif

  int C;
  cin >> C;

  while (C--) {
    int N;
    cin >> N;

    vector<int> grades(N);
    int sum = 0;

    for (int i = 0; i < N; i++) {
      cin >> grades[i];
      sum += grades[i];
    }

    double average = (double)sum / N;

    int above_avg = 0;
    for (int i = 0; i < N; i++) {
      if (grades[i] > average) {
        above_avg++;
      }
    }

    double percentage = (double)above_avg / N * 100;

    cout << fixed << setprecision(3) << percentage << "%" << endl;
  }

  return 0;
}
