// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1241
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int f;
    cin >> f;
    float total = 0;

    for (int i = 0; i < f; i++) {
      float size, animal, environment;
      cin >> size >> animal >> environment;

      total += (size / animal) * environment * animal;
    }

    cout << (int)total << '\n';
  }

  return 0;
}
