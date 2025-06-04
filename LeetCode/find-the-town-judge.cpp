#include <iostream>
#include <vector>
using namespace std;

int findJudge(int n, vector<vector<int>> &trust) {
  vector<int> count(n + 1, 0);
  vector<int> trusted(n + 1, 0);

  for (int i = 0; i < (int)trust.size(); ++i) {
    int a = trust[i][0];
    int b = trust[i][1];
    trusted[a]++;
    count[b]++;
  }

  for (int i = 1; i <= n; i++) {
    if (count[i] == n - 1 && trusted[i] == 0) {
      return i;
    }
  }

  return -1;
}

int main() {
  vector<vector<int>> trust = {{1, 2}};
  cout << findJudge(2, trust) << endl;

  return 0;
}