#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 100005;
vector<bool> isPrime(MAX_N, true);
vector<int> questions;

void sieve() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i < MAX_N; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j < MAX_N; j += i)
        isPrime[j] = false;
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  sieve();

  int n;
  cin >> n;

  for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
      int power = i;
      while (power <= n) {
        questions.push_back(power);
        if (power > n / i) {
          break;
        }
        power *= i;
      }
    }
  }

  cout << questions.size() << endl;
  for (int i = 0; i < (int)questions.size(); i++) {
    cout << questions[i] << " ";
  }
  cout << endl;

  return 0;
}
