// https://atcoder.jp/contests/abc149/tasks/abc149_c
#include <iostream>
#include <vector>
using namespace std;

const int MAXS = 10000000;
vector<bool> isPrime(MAXS, true);
vector<int> primes;

void sieve() {
  for (int i = 2; i * i <= MAXS; i++) {
    if (isPrime[i] == true) {
      for (int j = i * i; j <= MAXS; j += i)
        isPrime[j] = false;
    }
  }

  for (int i = 2; i <= MAXS; i++)
    if (isPrime[i]) {
      primes.push_back(i);
    }
}

int lower_bound(vector<int> &num, int key) {
  int low = 0, high = num.size() - 1;
  while (high - low > 1) {
    int mid = high + (low - high) / 2;
    if (num[mid] < key) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  if (num[low] >= key) {
    return low;
  }
  if (num[high] >= key) {
    return high;
  }
  return -1;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  sieve();

  int X;
  cin >> X;

  int idx = lower_bound(primes, X);
  if (idx != -1) {
    cout << primes[idx] << endl;
  }
  return 0;
}
