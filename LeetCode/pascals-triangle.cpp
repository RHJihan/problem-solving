#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
  vector<vector<int>> triangle;

  for (int i = 0; i < numRows; i++) {
    vector<int> row(i + 1, 1);

    for (int j = 1; j < i; j++) {
      row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
    }

    triangle.push_back(row);
  }

  return triangle;
}

int main() {
  vector<vector<int>> result = generate(5);

  for (int i = 0; i < (int)result.size(); i++) {
    for (int j = 0; j < (int)result[i].size(); j++) {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}