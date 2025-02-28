// https://codeforces.com/contest/339/problem/A
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  vector<int> numbers;
  cin >> s;

  int size = s.size();
  for (int i = 0; i < size; i++) {
    if (isdigit(s[i])) {
      numbers.push_back(s[i] - '0');
    }
  }

  sort(numbers.begin(), numbers.end());
  int v_size = numbers.size();
  for (int i = 0; i < v_size; i++) {
    if (i > 0) {
      cout << "+";
    }
    cout << numbers[i];
  }
  cout << '\n';

  return 0;
}