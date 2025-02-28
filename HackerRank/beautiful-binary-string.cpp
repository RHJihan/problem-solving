// https://www.hackerrank.com/challenges/beautiful-binary-string/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string b;
  cin >> b;

  int count = 0;
  int i = 0;
  while (i < n - 2) {
    if (b[i] == '0' && b[i + 1] == '1' && b[i + 2] == '0') {
      count++;
      i += 3;
    } else {
      i++; 
    }
  }

  cout << count << '\n';
  return 0;
}
