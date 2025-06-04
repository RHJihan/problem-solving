#include <iostream>
using namespace std;

bool judgeCircle(string moves) {
  int up = 0;
  int down = 0;
  int left = 0;
  int right = 0;

  for (int i = 0; i < (int)moves.size(); i++) {
    if (moves[i] == 'U') {
      up = up + 1;
    } else if (moves[i] == 'D') {
      down = down + 1;
    } else if (moves[i] == 'L') {
      left = left + 1;
    } else if (moves[i] == 'R') {
      right = right + 1;
    }
  }

  bool total_up_down = (up == down);
  bool total_left_right = (left == right);

  if (total_up_down && total_left_right) {
    return true;
  }
  return false;
}

int main() {
  cout << judgeCircle("UD") << endl;

  return 0;
}