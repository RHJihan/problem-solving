// https://codeforces.com/contest/472/problem/A
#include <iostream>
#include <vector>
using namespace std;

const int MAXS = 1000000;
vector<bool> isPrime(MAXS + 1, true);

void sieve() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= MAXS; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= MAXS; j += i)
        isPrime[j] = false;
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

  for (int x = 4; x < n; x++) {
    int y = n - x;
    if (!isPrime[x] && !isPrime[y]) {
      cout << x << " " << y << endl;
      break;
    }
  }

  return 0;
}
