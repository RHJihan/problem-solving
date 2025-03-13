#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < (int)a.size(); i++) {
      if (a[i] % 3 == 0) {
        count0++;
      } else if (a[i] % 3 == 1) {
        count1++;
      } else {
        count2++;
      }
    }

    int paired = min(count1, count2);
    count0 += paired;
    count1 -= paired;
    count2 -= paired;
    count0 += count1 / 3;
    count0 += count2 / 3;

    cout << count0 << endl;
  }

  return 0;
}
