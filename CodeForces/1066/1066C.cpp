#include <iostream>
using namespace std;

int main() {
  int q;
  cin >> q;

  int current_left = 200005;
  int current_right = 200004;
  int positions[400015];

  for (int i = 0; i < q; i++) {
    char type;
    int id;
    cin >> type >> id;

    if (type == 'L') {
      positions[id] = --current_left;
    } else if (type == 'R') {
      positions[id] = ++current_right;
    } else {
      int pos = positions[id];
      int rm_left = pos - current_left;
      int rm_right = current_right - pos;
      cout << min(rm_left, rm_right) << endl;
    }
  }

  return 0;
}
