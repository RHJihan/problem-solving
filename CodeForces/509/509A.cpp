// https://codeforces.com/contest/509/problem/A
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int table[n][n];

  for (int i = 0; i < n; i++) {
    table[i][0] = 1; 
    table[0][i] = 1; 
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      table[i][j] = table[i - 1][j] + table[i][j - 1];
    }
  }


  cout << table[n - 1][n - 1] << endl;

  return 0;
}
