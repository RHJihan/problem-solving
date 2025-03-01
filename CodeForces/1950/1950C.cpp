// https://codeforces.com/contest/1950/problem/C
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    string time;
    cin >> time;
    int hr, min;
    hr = (int)(time[0] - '0') * 10 + (int)(time[1] - '0');

    if (hr >= 0 && hr < 12) {
      if (hr == 0) {
        cout << "12" << ":" << time[3] << time[4] << " AM" << endl;
      } else {
        cout << time[0] << time[1] << ":" << time[3] << time[4] << " AM"
             << endl;
      }
    } else {
      hr = hr % 12;
      if (hr == 0) {
        cout << "12" << ":" << time[3] << time[4] << " PM" << endl;
      } else if (hr < 10) {
        cout << '0' << hr << ":" << time[3] << time[4] << " PM" << endl;
      } else {
        cout << hr << ":" << time[3] << time[4] << " PM" << endl;
      }
    }
  }

  return 0;
}