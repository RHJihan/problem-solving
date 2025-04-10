#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int a, b;
  cin >> a >> b;

  vector<int> path;
  while (b >= a) {
    path.push_back(b);

    if (b == a) {
      break;
    }

    if (b % 2 == 0) {
      b /= 2;
    } else if (b % 10 == 1) {
      b /= 10;
    } else {
      break;
    }
  }

  if (b != a) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    cout << path.size() << endl;
    for (int i = (int)path.size() - 1; i >= 0; i--) {
      cout << path[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
