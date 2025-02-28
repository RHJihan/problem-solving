// https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <iostream>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int a_size = a.size(), b_size = b.size();

  cout << a_size << " " << b_size << '\n';
  cout << a + b << '\n';

  cout << b[0];
  for (int i = 1; i < a_size; i++) {
    cout << a[i];
  }
  cout << " " << a[0];
  for (int i = 1; i < b_size; i++) {
    cout << b[i];
  }

  return 0;
}