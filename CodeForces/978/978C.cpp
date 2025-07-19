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

  vector<long long> rooms(n);
  for (long long i = 0; i < n; i++) {
    cin >> rooms[i];
  }

  vector<long long> prefix_sum(n);
  prefix_sum[0] = rooms[0];
  for (int i = 1; i < n; i++) {
    prefix_sum[i] = prefix_sum[i - 1] + rooms[i];
  }

  long long current = 0;
  for (int i = 0; i < m; i++) {
    long long room;
    cin >> room;

    while (room > prefix_sum[current]) {
      current++;
    }

    long long local;
    if (current == 0) {
      local = room;
    } else {
      local = room - prefix_sum[current - 1];
    }

    cout << (current + 1) << " " << local << endl;
  }

  return 0;
}
