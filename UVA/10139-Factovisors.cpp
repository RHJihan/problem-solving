#include <iostream>
#include <vector>
using namespace std;

int MAX_N = 100005;
vector<bool> isPrime(MAX_N, true);
vector<int> primes;

void sieve() {
  for (int i = 2; i * i <= MAX_N; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= MAX_N; j += i)
        isPrime[j] = false;
    }
  }
  for (int i = 2; i < MAX_N; i++) {
    if (isPrime[i]) {
      primes.push_back(i);
    }
  }
}

bool divide(int n, int m) {
  if (m == 0) {
    return false;
  }
  if (m == 1) {
    return true;
  }

  for (int i = 0; i < (int)primes.size() && primes[i] * primes[i] <= m; i++) {
    if (m % primes[i] == 0) {
      int count_m = 0;
      while (m % primes[i] == 0) {
        count_m++;
        m /= primes[i];
      }

      long long power = primes[i], count_n = 0;
      while (power <= n) {
        count_n += n / power;
        if (power > n / primes[i]) {
          break;
        }
        power *= primes[i];
      }

      if (count_n < count_m) {
        return false;
      }
    }
  }

  if (m > 1 && n < m) {
    return false;
  }

  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  sieve();
  int n, m;
  while (cin >> n >> m) {
    if (divide(n, m)) {
      cout << m << " divides " << n << "!" << endl;
    } else {
      cout << m << " does not divide " << n << "!" << endl;
    }
  }
  return 0;
}