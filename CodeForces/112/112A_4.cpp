// https://codeforces.com/contest/112/problem/A
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
// freopen("output.txt","w",stdout);
#endif

  string a, b;
  cin >> a >> b;

  int size = a.size();
  int indicator = 0;
  for (int i = 0; i < size; i++) {
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);

    if (a[i] < b[i]) {
      indicator = -1;
      break;
    } else if (a[i] > b[i]) {
      indicator = 1;
      break;
    }
  }

  cout << indicator << '\n';

  return 0;
}
