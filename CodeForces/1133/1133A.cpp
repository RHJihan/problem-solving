#include <iomanip>
#include <iostream>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int h1, m1, h2, m2;
  char colon;

  cin >> h1 >> colon >> m1;
  cin >> h2 >> colon >> m2;

  int start_min = h1 * 60 + m1;
  int end_min = h2 * 60 + m2;

  int mid_min = (start_min + end_min) / 2;

  int h3 = mid_min / 60;
  int m3 = mid_min % 60;

  cout << setfill('0') << setw(2) << h3 << ":"
       << setfill('0') << setw(2) << m3 << endl;

  return 0;
}
