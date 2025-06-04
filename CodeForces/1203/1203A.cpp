#include <iostream>
#include <vector>
using namespace std;

bool round_dance(vector<int> &p) {
  int n = (int)p.size();

  int pos = -1;
  for (int i = 0; i < n; i++) {
    if (p[i] == 1) {
      pos = i;
      break;
    }
  }

  bool clockwise = true;
  for (int i = 0; i < n; i++) {
    int expected = (i + 1);
    int index = (pos + i) % n;
    if (p[index] != expected) {
      clockwise = false;
      break;
    }
  }

  bool counterclockwise = true;
  for (int i = 0; i < n; i++) {
    int expected = (i + 1);
    int index = (pos - i + n) % n;
    if (p[index] != expected) {
      counterclockwise = false;
      break;
    }
  }

  return clockwise || counterclockwise;
}

int main() {
  int q;
  cin >> q;
  while (q--) {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }

    if (round_dance(p)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
