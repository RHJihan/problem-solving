// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1640
#include <iostream>
#include <vector>
using namespace std;

const int MAXS = 100000;
vector<bool> isPrime(MAXS + 1, true);
vector<int> primes;

void sieve() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= MAXS; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= MAXS; j += i)
        isPrime[j] = false;
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
  while (cin >> n) {
    if (n == 0) {
      break;
    }
    cout << n << " : ";
    int count = 0;
    for (int i = 0; i < primes.size(); i++) {
      int current = primes[i];
      if (current * current > n) {
        break;
      }
      if (n % current == 0) {
        count++;
        while (n % current == 0) {
          n /= current;
        }
      }
    }
    if (n > 1) {
      count++;
    }
    cout << count << endl;
  }
  return 0;
}
