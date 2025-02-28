// https://www.hackerrank.com/challenges/vector-erase/problem
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;

  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    v.push_back(input);
  }

  int del, l, r;
  cin >> del >> l >> r;

  v.erase(v.begin() + (del - 1));
  v.erase(v.begin() + (l - 1), v.begin() + (r - 1));

  int size = v.size();
  cout << size << '\n';
  for (int i = 0; i < size; i++) {
    cout << v[i] << " ";
  }

  return 0;
}