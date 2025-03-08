#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "Tetrahedron") {
      sum += 4;
    } else if (s == "Cube") {
      sum += 6;
    } else if (s == "Octahedron") {
      sum += 8;
    } else if (s == "Dodecahedron") {
      sum += 12;
    } else if (s == "Icosahedron") {
      sum += 20;
    }
  }

  cout << sum << endl;

  return 0;
}