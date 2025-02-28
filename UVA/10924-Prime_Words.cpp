// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1865
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MAXS = 100000;
vector<bool> isPrime(MAXS, true);

void sieve() {
  isPrime[0] = false;
  isPrime[1] = true;
  for (int i = 2; i * i < MAXS; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j < MAXS; j += i)
        isPrime[j] = false;
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  sieve();
  string word;
  while (cin >> word) {
    int sum = 0;
    for (int i = 0; i < word.size(); i++) {
      if (word[i] >= 'a' && word[i] <= 'z') {
        sum += (word[i] - 'a' + 1);
      } else if (word[i] >= 'A' && word[i] <= 'Z') {
        sum += (word[i] - 'A' + 27);
      }
    }

    if (isPrime[sum]) {
      cout << "It is a prime word." << endl;
    } else {
      cout << "It is not a prime word." << endl;
    }
  }
  return 0;
}
