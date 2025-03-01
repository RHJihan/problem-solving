// https://codeforces.com/contest/1873/problem/B
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> num(n);
    int min_num = 10;
    int min_num_index = -1;
    for (int i = 0; i < n; i++) {
      cin >> num[i];
      if (num[i] < min_num) {
        min_num = num[i];
        min_num_index = i;
      }
    }
    num[min_num_index]++;
    int result = 1;
    for (int i = 0; i < n; i++) {
      result *= num[i];
    }
    cout << result << endl;
  }

  return 0;
}