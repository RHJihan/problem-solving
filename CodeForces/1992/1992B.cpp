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
    int n, k;
    cin >> n >> k;

    vector<int> pieces(k);
    int max_piece = 0;
    int count = 0;

    for (int i = 0; i < k; ++i) {
      cin >> pieces[i];
      max_piece = max(max_piece, pieces[i]);
      count += (pieces[i] - 1);
    }

    cout << (n - max_piece) + (count - (max_piece - 1)) << endl;
  }

  return 0;
}
