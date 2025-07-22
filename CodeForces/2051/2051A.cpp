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

    vector<int> mono(n);
    vector<int> stereo(n + 1);

    for (int i = 0; i < n; i++) {
      cin >> mono[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> stereo[i];
    }
    stereo[n] = 0;

    int count = 0;

    for (int i = 0; i < n; i++) {
      int gain = mono[i] - stereo[i + 1];
      if (gain > 0) {
        count += gain;
      }
    }

    cout << count << endl;
  }

  return 0;
}
