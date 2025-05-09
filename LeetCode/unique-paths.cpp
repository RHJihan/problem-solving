#include <iostream>
#include <vector>
using namespace std;

int dfs(int i, int j, int m, int n, vector<vector<int>> &calc) {

  if (i >= m || j >= n) {
    return 0;
  }

  if (i == m - 1 && j == n - 1) {
    return 1;
  }

  if (calc[i][j] != -1) {
    return calc[i][j];
  }

  calc[i][j] = dfs(i + 1, j, m, n, calc) + dfs(i, j + 1, m, n, calc);
  return calc[i][j];
}

int uniquePaths(int m, int n) {
  vector<vector<int>> calc(m, vector<int>(n, -1));
  return dfs(0, 0, m, n, calc);
}

int main() {
  int m = 3, n = 7;
  cout << uniquePaths(m, n) << endl;
  return 0;
}
