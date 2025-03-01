// https://codeforces.com/contest/1619/problem/B
#include <iostream>
#include <set>
#include <vector>
using namespace std;

const int MAX_S = 31622;
const int MAX_C = 1000;
set<int> num;

void precalc() {
  for (int i = 1; i <= MAX_S; i++) {
    num.insert(i * i);
  }
  for (int i = 1; i <= MAX_C; i++) {
    num.insert(i * i * i);
  }
}

int upper_bound(vector<int> &num, int key) {
  int low = 0, high = num.size() - 1;
  while (high - low > 1) {
    int mid = high + (low - high) / 2;
    if (num[mid] <= key) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  if (num[low] > key) {
    return low;
  }
  if (num[high] > key) {
    return high;
  }
  return num.size();
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  precalc();
  vector<int> vec(num.begin(), num.end());

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << upper_bound(vec, n) << endl;
  }

  return 0;
}
0;
}
