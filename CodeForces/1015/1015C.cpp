#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;

  vector<int> compress;
  long long size = 0;

  for (int i = 0; i < n; i++) {
    int ini_size, com_size;
    cin >> ini_size >> com_size;
    size += ini_size;
    compress.push_back(ini_size - com_size);
  }

  if (size <= m) {
    cout << 0 << endl;
    return 0;
  }

  sort(compress.rbegin(), compress.rend());

  int count = 0;

  for (int i = 0; i < n; i++) {
    size -= compress[i];
    count++;

    if (size <= m) {
      cout << count << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
