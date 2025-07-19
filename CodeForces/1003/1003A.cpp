#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  int a[105];
  int count[105] = {0};

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    count[a[i]]++;
  }

  int max_count = 0;

  for (int i = 1; i <= 100; i++) {
    if (count[i] > max_count) {
      max_count = count[i];
    }
  }

  cout << max_count << endl;

  return 0;
}
