// https://codeforces.com/contest/259/problem/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> first(3), second(3), third(3);

  for (int i = 0; i < 3; i++) {
    cin >> first[i];
  }
  for (int i = 0; i < 3; i++) {
    cin >> second[i];
  }
  for (int i = 0; i < 3; i++) {
    cin >> third[i];
  }

  int sum =
      (first[1] + first[2] + second[0] + second[2] + third[0] + third[1]) / 2;

  first[0] = sum - first[1] - first[2];
  second[1] = sum - second[0] - second[2];
  third[2] = sum - third[0] - third[1];

  for (int i = 0; i < 3; i++) {
    cout << first[i] << " ";
  }
  cout << '\n';
  for (int i = 0; i < 3; i++) {
    cout << second[i] << " ";
  }
  cout << '\n';
  for (int i = 0; i < 3; i++) {
    cout << third[i] << " ";
  }
  cout << '\n';

  return 0;
}