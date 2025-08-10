#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<vector<int>> sequences(n, vector<int>(n - 1));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - 1; j++) {
        cin >> sequences[i][j];
      }
    }

    vector<int> first;
    for (int i = 0; i < n; i++) {
      first.push_back(sequences[i][0]);
    }

    sort(first.begin(), first.end());

    int first_num;
    int missing_num;

    if (first[0] != first[1]) {
      first_num = first[1];
      missing_num = first[0];
    } else {
      first_num = first[0];
      missing_num = first.back();
    }

    cout << first_num << " ";

    for (int i = 0; i < n; i++) {
      if (sequences[i][0] == missing_num) {
        for (int j = 0; j < n - 1; j++) {
          cout << sequences[i][j] << " ";
        }
        break;
      }
    }

    cout << endl;
  }

  return 0;
}
