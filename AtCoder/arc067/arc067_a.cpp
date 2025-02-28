// https://atcoder.jp/contests/arc067/tasks/arc067_a
#include <iostream>
#include <map>
#include <vector>
using namespace std;

const int MOD = 1000000007;
const int MAXS = 10000;

vector<bool> isPrime(MAXS + 1, true);
vector<int> primes;

void sieve() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= MAXS; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= MAXS; j += i) {
        isPrime[j] = false;
      }
    }
  }
  for (int i = 2; i <= MAXS; i++) {
    if (isPrime[i]) {
      primes.push_back(i);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif

  sieve();

  int n;
  cin >> n;

  map<int, int> count;

  for (int i = 2; i <= n; i++) {
    int num = i;
    for (int j = 0; j < primes.size(); j++) {
      if (primes[j] * primes[j] > num) {
        break;
      }
      while (num % primes[j] == 0) {
        count[primes[j]]++;
        num /= primes[j];
      }
    }
    if (num > 1) {
      count[num]++;
    }
  }

  long long result = 1;
  for (auto it = count.begin(); it != count.end(); it++) {
    result = (result * (it->second + 1)) % MOD;
  }
  cout << result << endl;

  return 0;
}
