// https://codeforces.com/contest/797/problem/A
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int n, k;
  cin >> n >> k;

  vector<int> factors;

  for (int i = 2; i <= n; i++) {
    while (n % i == 0 && factors.size() < k - 1) {
      factors.push_back(i);
      n /= i;
    }
  }

  if (n > 1) {
    factors.push_back(n);
  }
  if (factors.size() != k) {
    cout << "-1" << endl;
  } else {
    for (int i = 0; i < factors.size(); i++) {
      cout << factors[i] << " ";
    }
    cout << endl;
  }

    return 0;
}
