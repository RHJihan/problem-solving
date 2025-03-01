// https://codeforces.com/contest/1850/problem/B
#include <iostream>
#include <map>
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

    int winner_index = -1;
    int winner_quality = 0;

    for (int i = 0; i < n; i++) {
      int length, quality;
      cin >> length >> quality;

      if (length <= 10 && quality > winner_quality) {
        winner_quality = quality;
        winner_index = i + 1; 
      }
    }
    cout << winner_index << endl;
  }

  return 0;
}