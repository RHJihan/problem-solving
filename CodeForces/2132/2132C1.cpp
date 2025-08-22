#include <iostream>
#include <vector>
using namespace std;

vector<long long> melons, cost;

long long dealCost(int x) {
  if (x == 0) {
    return 3;
  }
  long long power = 1;
  for (int i = 0; i < x; i++) {
    power *= 3;
  }

  long long d_cost = 1;
  for (int i = 0; i < x + 1; i++) {
    d_cost *= 3;
  }

  d_cost += (long long)x * (power / 3);
  return d_cost;
}

void precalc() {
  for (int x = 0;; x++) {
    long long w = 1;
    for (int i = 0; i < x; i++) {
      w *= 3;
    }

    if (w > (long long)1e9) {
      break;
    }
    melons.push_back(w);
    cost.push_back(dealCost(x));
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  precalc();

  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    long long total = 0;
    for (int i = (int)melons.size() - 1; i >= 0; i--) {
      while (n >= melons[i]) {
        n -= melons[i];
        total += cost[i];
      }
    }
    cout << total << endl;
  }

  return 0;
}
