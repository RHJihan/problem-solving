#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);

#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<string> matrix(n);
    for (int i = 0; i < n; i++) {
      cin >> matrix[i];
    }

    int count = 0;

    for (int i = 0; i < n / 2; i++) {
      for (int j = 0; j < n / 2; j++) {

        char chars[4];
        chars[0] = matrix[i][j];
        chars[1] = matrix[j][n - 1 - i];
        chars[2] = matrix[n - 1 - i][n - 1 - j];
        chars[3] = matrix[n - 1 - j][i];

        int values[4];
        for (int k = 0; k < 4; k++) {
          values[k] = chars[k] - 'a' + 1;
        }

        int max_val = values[0];
        for (int k = 1; k < 4; k++) {
          if (values[k] > max_val) {
            max_val = values[k];
          }
        }

        for (int k = 0; k < 4; k++) {
          count += (max_val - values[k]);
        }
      }
    }

    cout << count << endl;
  }

  return 0;
}
