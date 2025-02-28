// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1241
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int f;
    cin >> f;
    int total = 0;

    for (int i = 0; i < f; i++) {
      int size, animal, environment;
      cin >> size >> animal >> environment;

      total += size * environment;
    }

    cout << total << '\n';
  }

  return 0;
}
