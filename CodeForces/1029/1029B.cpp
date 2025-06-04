#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int length = 1;
  int start = 0;

  for (int i = 1; i < n; i++) {
    if (a[i] <= 2 * a[i - 1]) {
      length = max(length, i - start + 1);
    } else {
      start = i;
    }
  }

  cout << length << endl;

  return 0;
}
