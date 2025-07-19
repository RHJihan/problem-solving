#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int maxFreeTime(int eventTime, int k, vector<int> &startTime, vector<int> &endTime) {
  int n = (int)startTime.size();
  int maxFree = 0;
  int total = 0;

  for (int i = 0; i < n; i++) {
    total += endTime[i] - startTime[i];

    if (i >= k - 1) {
      int left;
      if (i - k >= 0) {
        left = endTime[i - k];
      } else {
        left = 0;
      }

      int right;
      if (i + 1 < n) {
        right = startTime[i + 1];
      } else {
        right = eventTime;
      }

      int freeTime = right - left - total;
      maxFree = max(maxFree, freeTime);
      total -= endTime[i - k + 1] - startTime[i - k + 1];
    }
  }

  return maxFree;
}

int main() {
  int eventTime = 10, k = 1;
  vector<int> startTime = {0, 2, 9};
  vector<int> endTime = {1, 4, 10};

  cout << maxFreeTime(eventTime, k, startTime, endTime) << endl;

  return 0;
}
