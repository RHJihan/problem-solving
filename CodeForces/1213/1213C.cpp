#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    long long n, m;
    cin >> n >> m;

    vector<long long> multiplication_table(11);
    long long sum = 0;
    for (int i = 1; i <= 10; i++) {
      multiplication_table[i] = i * m;
      sum += multiplication_table[i] % 10;
    }

    long long multi = n / (m * 10);
    long long rest = n % (m * 10);
    long long running = 0;

    for (int i = 0; i < 10; i++) {
      if (multiplication_table[i] > rest) {
        break;
      }
      running += multiplication_table[i] % 10;
    }

    cout << sum * multi + running << endl;
  }

  return 0;
}