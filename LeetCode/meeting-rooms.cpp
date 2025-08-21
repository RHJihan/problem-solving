#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  bool canAttendMeetings(vector<pair<int, int>> &intervals) {
    sort(intervals.begin(), intervals.end());

    for (int i = 1; i < (int)intervals.size(); i++) {
      if (intervals[i].first < intervals[i - 1].second) {
        return false;
      }
    }
    return true;
  }
};

int main() {
  Solution sol;

  vector<pair<int, int>> intervals1 = {{0, 30}, {5, 10}, {15, 20}};
  cout << (sol.canAttendMeetings(intervals1) ? "true" : "false") << endl;

  vector<pair<int, int>> intervals2 = {{5, 8}, {9, 15}};
  cout << (sol.canAttendMeetings(intervals2) ? "true" : "false") << endl;

  return 0;
}