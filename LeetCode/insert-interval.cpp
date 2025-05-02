#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval) {
  vector<vector<int>> result;
  int i = 0;
  int n = (int)intervals.size();

  while (i < n && intervals[i][1] < newInterval[0]) {
    result.push_back(intervals[i]);
    i++;
  }

  while (i < n && intervals[i][0] <= newInterval[1]) {
    newInterval[0] = min(newInterval[0], intervals[i][0]);
    newInterval[1] = min(max(newInterval[1], intervals[i][1]), 100000);
    i++;
  }

  result.push_back(newInterval);

  while (i < n) {
    result.push_back(intervals[i]);
    i++;
  }

  return result;
}

int main() {

  vector<vector<int>> intervals = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
  vector<int> newInterval = {4, 8};

  vector<vector<int>> merged = insert(intervals, newInterval);

  for (int i = 0; i < (int)merged.size(); i++) {
    cout << "[" << merged[i][0] << "," << merged[i][1] << "] ";
  }

  return 0;
}
