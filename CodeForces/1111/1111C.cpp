#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

long long n, k, A, B;
vector<long long> avengers;

long long countAvengers(long long left, long long right) {
  return upper_bound(avengers.begin(), avengers.end(), right) -
         lower_bound(avengers.begin(), avengers.end(), left);
}

long long destroy(long long left, long long right) {
  long long avengerCount = countAvengers(left, right);

  if (avengerCount == 0)
    return A;

  long long length = right - left + 1;
  long long burnCost = B * avengerCount * length;

  if (left == right)
    return burnCost;

  long long mid = (left + right) / 2;
  long long leftCost = destroy(left, mid);
  long long rightCost = destroy(mid + 1, right);

  return min(burnCost, leftCost + rightCost);
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  cin >> n >> k >> A >> B;

  avengers.resize(k);
  for (long long i = 0; i < k; i++) {
    cin >> avengers[i];
  }

  sort(avengers.begin(), avengers.end());

  long long totalLength = pow(2, n);
  long long result = destroy(1, totalLength);

  cout << result << endl;

  return 0;
}
