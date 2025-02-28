// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2876
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int minimumEnforcers(vector<pair<int, int>> &intervals) {

  sort(intervals.begin(), intervals.end());

  vector<int> endTimes;

  for (auto &interval : intervals) {
    bool assigned = false;

    for (int &endTime : endTimes) {
      if (interval.first > endTime) {
        endTime = interval.second;
        assigned = true;
        break;
      }
    }

    if (!assigned) {
      endTimes.push_back(interval.second);
    }
  }

  return endTimes.size();
}

int main() {
  int caseNumber = 1;

  while (true) {
    int N;
    cin >> N;

    if (N == -1) {
      break;
    }
    vector<pair<int, int>> intervals;

    for (int i = 0; i < N; ++i) {
      int S, E;
      cin >> S >> E;
      intervals.emplace_back(S, E);
    }

    int result = minimumEnforcers(intervals);
    cout << "Case " << caseNumber << ": " << result << '\n';
    caseNumber++;
  }

  return 0;
}