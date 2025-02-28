// https://www.spoj.com/problems/AGGRCOW/en/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool possible(vector<int> &stalls, int cows, int dist) {
  int count = 1;
  int last_pos = stalls[0];

  for (int i = 1; i < stalls.size(); i++) {
    if (stalls[i] - last_pos >= dist) {
      count++;
      last_pos = stalls[i];
      if (count == cows)
        return true;
    }
  }
  return false;
}

int find(vector<int> &stalls, int cows) {
  sort(stalls.begin(), stalls.end());

  int left = 1;
  int right = stalls[stalls.size() - 1] - stalls[0];
  int ans = 0;

  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (possible(stalls, cows, mid)) {
      ans = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return ans;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n, c;
    cin >> n >> c;

    vector<int> stalls(n);
    
    for (int i = 0; i < n; i++) {
      cin >> stalls[i];
    }

    cout << find(stalls, c) << endl;
  }

  return 0;
}
