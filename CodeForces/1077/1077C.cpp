#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  long long n;
  cin >> n;
  vector<long long> a(n);
  long long total_sum = 0;
  map<long long, long long> freq;

  for (long long i = 0; i < n; i++) {
    cin >> a[i];
    total_sum += a[i];
    freq[a[i]]++;
  }

  vector<long long> result;

  for (long long i = 0; i < n; i++) {
    long long rest_sum = total_sum - a[i];
    if (rest_sum % 2 == 0) {
      long long target = rest_sum / 2;

      if (freq[target] > 0) {
        if (target == a[i] && freq[target] < 2) {
          continue;
        }
        result.push_back(i + 1);
      }
    }
  }

  cout << result.size() << endl;
  for (long long i = 0; i < (long long)result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}
