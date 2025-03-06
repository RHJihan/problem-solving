#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

const int MAXS = 60;

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
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  sieve();

  int n, m;
  cin >> n >> m;

  auto it = find(primes.begin(), primes.end(), n);

  if (it != primes.end() && (it + 1) != primes.end() && *(it + 1) == m) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
