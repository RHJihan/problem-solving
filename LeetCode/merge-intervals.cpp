#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals) {
  sort(intervals.begin(), intervals.end());

  vector<vector<int>> merged;

  for (int i = 0; i < (int)intervals.size(); i++) {
    vector<int> interval = intervals[i];
    if (merged.empty() || merged.back()[1] < interval[0]) {
      merged.push_back(interval);
    } else {
      merged.back()[1] = max(merged.back()[1], interval[1]);
    }
  }

  return merged;
}

int main() {
  vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  vector<vector<int>> result = merge(intervals);
  for (const auto &interval : intervals) {
    cout << "[" << interval[0] << "," << interval[1] << "] ";
  }
  cout << endl;

  return 0;
}
