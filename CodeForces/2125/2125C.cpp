#include <bits/stdc++.h>
using namespace std;

const long long MAX_N = 100000000;
vector<long long> primes;
vector<bool> isPrime(MAX_N, true);
map<long long, vector<long long>> memo;

void sieve() {
  isPrime[0] = isPrime[1] = false;
  for (long long i = 2; i * i <= MAX_N; i++) {
    if (isPrime[i]) {
      for (long long j = i * i; j <= MAX_N; j += i)
        isPrime[j] = false;
    }
  }

  for (long long i = 2; i < MAX_N; i++) {
    if (isPrime[i]) {
      primes.push_back(i);
    }
  }
}

vector<long long> getPrimeFactors(long long n) {
  if (memo.count(n)) {
    return memo[n];
  }

  vector<long long> factors;
  long long original = n;

  for (long long p : primes) {
    if (p * p > n)
      break;
    while (n % p == 0) {
      factors.push_back(p);
      n /= p;
    }
  }

  if (n > 1)
    factors.push_back(n);

  memo[original] = factors;
  return factors;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  sieve();

  long long t;
  cin >> t;

  while (t--) {
    long long l, r;
    cin >> l >> r;

    map<long long, vector<long long>> factors;

    long long good_count = 0;

    for (long long i = l; i <= r; i++) {
      if (factors.find(i) == factors.end()) {
        factors[i] = getPrimeFactors(i);
      }

      bool good = true;
      for (long long f : factors[i]) {
        if (f < 10) {
          good = false;
          break;
        }
      }

      if (good) {
        good_count++;
      }
    }

    cout << good_count << endl;
  }

  return 0;
}
