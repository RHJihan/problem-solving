#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  void rotate(vector<vector<int>> &arr) {
    int n = (int)arr.size();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0, k = n - 1; j < k; j++, k--) {
        int temp = arr[i][j];
        arr[i][j] = arr[i][k];
        arr[i][k] = temp;
      }
    }
  }
};

int main() {
  Solution sol;

  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  sol.rotate(arr);

  for (int i = 0; i < (int)arr.size(); i++) {
    for (int j = 0; j < (int)arr[i].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}